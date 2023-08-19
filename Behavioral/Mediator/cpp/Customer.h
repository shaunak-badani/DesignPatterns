#include <iostream>
#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer
{
    private:
        std::string address;


    public:
        Customer(std::string address)
        {
            this->address = address;
        }

        std::string getAddress()
        {
            return this->address;
        }
};

#endif