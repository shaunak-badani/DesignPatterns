#include "TextDocument.h"

int main()
{
    TextDocument* textDocument = new TextDocument();
    textDocument->write("hello");
    textDocument->print();
    textDocument->save();

    textDocument->write(" world");
    textDocument->print();

    textDocument->undo();
    textDocument->print();
    return 0;
}