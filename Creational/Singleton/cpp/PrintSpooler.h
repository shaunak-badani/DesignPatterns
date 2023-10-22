#ifndef PRINT_SPOOLER_H
#define PRINT_SPOOLER_H
#include <iostream>


class PrintSpooler {

    public:

        static PrintSpooler* getInstance() {
            std::cout << "Initialized? " << initialized << std::endl;
            if(initialized)
            {
                return spooler;
            }

            spooler->init();
            initialized = true;
            return spooler;
        }

    private:
        static bool initialized;

        static PrintSpooler* spooler;

        PrintSpooler() {}

        void init() {}



};

bool PrintSpooler::initialized = false;

PrintSpooler* PrintSpooler::spooler = new PrintSpooler();

#endif