#ifndef TEXT_DOCUMENT_H
#define TEXT_DOCUMENT_H
#include <iostream>
#include "Memento.h"

class TextDocument
{
    private:
        std::string text = "";
        
        Memento* memento = new Memento(text);

    public:
        void write(std::string text)
        {
            this->text += text;
        }

        void print()
        {
            std::cout << this->text << std::endl;
        }

        void save()
        {
            memento->setState(text);
        }

        void undo()
        {
            this->text = memento->getState();
        }
};

#endif