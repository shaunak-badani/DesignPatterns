#include <iostream>
#include "DocumentHandler.h"
#include "SlideShowHandler.h"
#include "SpreadSheetHandler.h"
#include "TextDocumentHandler.h"

int main()
{
    std::cout << "Writing cpp after a long time" << std::endl;

    std::vector<Handler*> listOfHandlers = {
        new SlideShowHandler(),
        new SpreadSheetHandler(),
        new TextDocumentHandler()
    };

    Handler* chain = DocumentHandler::constructChain(listOfHandlers);
    chain->openDocument("txt");
    return 0;
}