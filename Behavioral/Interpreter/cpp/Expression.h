#ifndef EXPRESSION_H
#define EXPRESSION_H

#include<iostream>

class Expression
{
    public:
        virtual std::string interpret(std::string context) = 0;
};

#endif