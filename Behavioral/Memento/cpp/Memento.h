#ifndef MEMENTO_H
#define MEMENTO_H
#include <iostream>

class Memento
{
    private:
        std::string state;
    
    public:

        Memento(std::string state)
        {
            this->state = state;
        }

        std::string getState()
        {
            return this->state;
        }

        void setState(std::string state)
        {
            this->state = state;
        }
};

#endif