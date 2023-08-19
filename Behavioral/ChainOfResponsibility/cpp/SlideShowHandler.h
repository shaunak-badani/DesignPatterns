#include <string>
#include <iostream>

class SlideShowHandler : public DocumentHandler
{
    public:
        void openDocument(std::string fileExtension)
        {
            if(fileExtension.compare("ppt") == 0)
            {
                std::cout << "SlideShowHandler in action." << std::endl;
            }
            else
            {
                DocumentHandler::openDocument(fileExtension);
            }
        }
};