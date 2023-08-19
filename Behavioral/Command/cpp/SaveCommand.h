#ifndef SAVE_COMMAND_H
#define SAVE_COMMAND_H
#include "Command.h"

class SaveCommand : public Command
{
    public:
        Document *document;

        SaveCommand(Document *document)
        {
            this->document = document;
        }

        void execute()
        {
            document->save();
        }
};

#endif