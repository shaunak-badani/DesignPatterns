#include "Mediator.h"
int main()
{
    Mediator* mediator = new Mediator();
    mediator->buy("pens", 3);
    return 0;
}