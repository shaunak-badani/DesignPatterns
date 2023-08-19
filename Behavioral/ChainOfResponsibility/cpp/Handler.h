class Handler
{
    public:
        // virtual function
        virtual Handler* setNext(Handler* next) = 0;
        // [ ()= 0 ] is a pure specifier

        virtual void openDocument(std::string fileExtension) = 0;
};