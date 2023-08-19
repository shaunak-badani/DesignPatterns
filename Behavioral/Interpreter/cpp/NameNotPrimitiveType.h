#ifndef NAME_NOT_PRIMITIVE_H
#define NAME_NOT_PRIMITIVE_H

#include <iostream>
#include "Expression.h"

class NameNotPrimitiveType : public Expression
{
    public:
        std::string interpret(std::string context) override
        {
            if(context.compare("int") == 0)
            {
                return context + "1";
            }
            return context;
        }
};

#endif