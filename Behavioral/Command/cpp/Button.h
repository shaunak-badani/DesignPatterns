#ifndef BUTTON_H
#define BUTTON_H
#include <iostream>
#include "Command.h"

// Button class is the invoker
class Button
{
    public: 

        std::string text;

        Button(std::string text)
        {
            this->text = text;
        }

        void click(Command *command)
        {
            command->execute();
        }
};

#endif