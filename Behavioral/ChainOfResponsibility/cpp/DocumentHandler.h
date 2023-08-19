#include <string>
#include <vector>
#include "Handler.h"

class DocumentHandler : public Handler
{
    public:

        // virtual function,
        // makes DocumentHandler abstract
        Handler* setNext(Handler* next)
        {
            this->next = next;
            return next;
        }

        void openDocument(std::string fileExtension)
        {
            if(this->next != NULL)
            {
                this->next->openDocument(fileExtension);
            }
        }
        
        static Handler* constructChain(std::vector<Handler*> listOfHandlers)
        {
            Handler* chain = new DocumentHandler();

            Handler* head = chain;

            for(Handler* node : listOfHandlers)
            {
                chain = chain->setNext(node);
            }

            return head;
        }
    
    private:
        Handler *next;
};