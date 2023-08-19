#ifndef FIRST_LETTER_LOWERCASE_H
#define FIRST_LETTER_LOWERCASE_H

#include "Expression.h"
#include <iostream>
#include <cstring>
#include "NameNotPrimitiveType.h"

class FirstLetterIsLowerCase : public Expression
{
    NameNotPrimitiveType* nameNotPrimitiveType = new NameNotPrimitiveType();

    public:
        std::string interpret(std::string context) override
        {
            int n = context.length();
            context = "Z" + context.substr(1, n - 1);
            return nameNotPrimitiveType->interpret(context);
        }
};

#endif