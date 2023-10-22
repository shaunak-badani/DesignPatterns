

public class PrintSpooler {
    private static final PrintSpooler spooler = new PrintSpooler();

    private static boolean initialized = false;

    private PrintSpooler() {}

    private void init() {
        // Initialize spooler here
    }

    // synchronized keyword blocks function execution for a thread
    // if another thread is still executing this function
    public static synchronized PrintSpooler getInstance() 
    {
        if(initialized)
        {
            return spooler;
        }
        spooler.init();
        initialized = true;
        return spooler;
    }
}