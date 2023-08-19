public class Client {
    public static void main(String args[])
    {
        // create the successor chain
        DocumentHandler chain = 
        new SpreadSheetHandler(
            new SlideShowHandler(
                new TextDocumentHandler(null)
            )
        );
        chain.openDocument("ppt");
        chain.openDocument("txt");
        chain.openDocument("xlsx");
    }
}