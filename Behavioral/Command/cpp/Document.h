#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>

class Document
{
    public:
        void save()
        {
           std::cout << "Saving documents!" << std::endl;
        }

        void print()
        {
            std::cout << "Printing documents!"  << std::endl;
        }
};

#endif