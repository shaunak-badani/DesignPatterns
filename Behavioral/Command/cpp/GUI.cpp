#include <iostream>
#include "Document.h"
#include "Button.h"
#include "SaveCommand.h"
#include "PrintCommand.h"

int main()
{
    Document* doc = new Document();
    Button *button = new Button("IDK :(");

    button->click(new SaveCommand(doc));
    button->click(new PrintCommand(doc));
}