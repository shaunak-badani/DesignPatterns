#include <iostream>
#include "FirstLetterNotUnderscore.h"

int main()
{
    std::string context = "_Int";
    FirstLetterNotUnderscore* nameNotPrimitiveType = new FirstLetterNotUnderscore();
    context = nameNotPrimitiveType->interpret(context);
    std::cout << context << std::endl;
    return 0;
}