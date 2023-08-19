#include <iostream>
#ifndef DRIVER_H
#define DRIVER_H

class Driver
{
    public:
        void deliver(std::string item, int quantity, std::string customerAddress)
        {
            std::cout << quantity << " " << item  << " out for delivery to "  << customerAddress << std::endl;
        }
};
#endif