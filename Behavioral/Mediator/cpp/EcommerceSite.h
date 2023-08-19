#include <iostream>
#include <string>
#include <unordered_map>

#ifndef ECOMMERCE_SITE_H
#define ECOMMERCE_SITE_H

class EcommerceSite
{
    private:
        std::unordered_map<std::string, int> stock;

    public:
        EcommerceSite()
        {
            stock["pens"] = 100;
            stock["pencils"] = 75;
            stock["erasers"] = 75;
        }

        bool checkInStock(std::string item, int quantity)
        {
            return this->stock.count(item) && this->stock[item] > quantity;
        }

        void sell(std::string item, int quantity)
        {
            int newQuantity = this->stock[item] - quantity;
            stock[item] = newQuantity;
        }
};

#endif