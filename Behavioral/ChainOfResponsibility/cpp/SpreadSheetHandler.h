#include <string>
#include <iostream>

class SpreadSheetHandler : public DocumentHandler
{
    public:
        void openDocument(std::string fileExtension)
        {
            if(fileExtension.compare("xlsx") == 0)
            {
                std::cout << "Spread sheet handler in action." << std::endl;
            }
            else
            {
                DocumentHandler::openDocument(fileExtension);
            }
        }
};