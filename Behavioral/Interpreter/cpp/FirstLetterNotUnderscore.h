#ifndef FIRST_LETTER_UNDERSCORE_H
#define FIRST_LETTER_UNDERSCORE_H

#include "Expression.h"
#include "FirstLetterIsLowerCase.h"
#include <iostream>

class FirstLetterNotUnderscore : public Expression
{
    FirstLetterIsLowerCase* firstLetterIsLowerCase = new FirstLetterIsLowerCase();

    public:
        std::string interpret(std::string context) override
        {
            if(context.substr(0, 1).compare("_") == 0)
            {
                int n = context.length();
                context = context.substr(1, n - 1);
            }
            return firstLetterIsLowerCase->interpret(context);
        }
};

#endif