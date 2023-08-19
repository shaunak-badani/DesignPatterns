public class TextDocumentHandler extends DocumentHandler
{
    public TextDocumentHandler(DocumentHandler handler)
    {
        // executes DocumentHandler constructor
        // in-effect, calling this.next = handler
        super(handler);
    }

    public void openDocument(String fileExtension)
    {
        if(fileExtension.equals("txt"))
        {
            System.out.println("Opening text document");
        }
        else
        {
            super.openDocument(fileExtension);
        }
    }
    
}