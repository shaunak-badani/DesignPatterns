#ifndef MEDIATOR_H
#define MEDIATOR_H

#include "Customer.h"
#include "EcommerceSite.h"
#include "Driver.h"

class Mediator
{

    public:

        Mediator()
        {
            this->customer = new Customer("123 Penny Street");
            this->site = new EcommerceSite();
            this->driver = new Driver();
        }

        void buy(std::string item, int quantity)
        {
            if(site->checkInStock(item, quantity))
            {
                site->sell(item, quantity);
                driver->deliver(item, quantity, customer->getAddress());
            }
        }

    private:
        Customer* customer;
        EcommerceSite* site;
        Driver* driver;




};

#endif