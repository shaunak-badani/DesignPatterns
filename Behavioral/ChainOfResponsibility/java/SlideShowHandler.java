public class SlideShowHandler extends DocumentHandler
{
    public SlideShowHandler(DocumentHandler handler)
    {
        // executes DocumentHandler constructor
        // in-effect, calling this.next = handler
        super(handler);
    }

    public void openDocument(String fileExtension)
    {
        if(fileExtension.equals("ppt"))
        {
            System.out.println("Opening slideshow document");
        }
        else
        {
            super.openDocument(fileExtension);
        }
    }
}