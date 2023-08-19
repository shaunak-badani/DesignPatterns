#include <string>
#include <iostream>

class TextDocumentHandler : public DocumentHandler
{
    public:
        void openDocument(std::string fileExtension)
        {
            if(fileExtension.compare("txt") == 0)
            {
                std::cout << "Text document handler in action." << std::endl;
            }
            else
            {
                DocumentHandler::openDocument(fileExtension);
            }
        }
};