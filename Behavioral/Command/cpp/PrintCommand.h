#ifndef PRINT_COMMAND_H
#define PRINT_COMMAND_H
#include "Command.h"
#include "Document.h"

class PrintCommand : public Command
{
    public:
        Document *document;

        PrintCommand(Document *document)
        {
            this->document = document;
        }

        void execute()
        {
            document->print();
        }
};

#endif