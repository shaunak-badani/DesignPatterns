public class SpreadSheetHandler extends DocumentHandler
{
    public SpreadSheetHandler(DocumentHandler handler)
    {
        // executes DocumentHandler constructor
        // in-effect, calling this.next = handler
        super(handler);
    }

    public void openDocument(String fileExtension)
    {
        if(fileExtension.equals("xlsx"))
        {
            System.out.println("Opening excel document");
        }
        else
        {
            super.openDocument(fileExtension);
        }
    }
    
}