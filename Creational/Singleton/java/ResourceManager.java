public class ResourceManager {
    public static void main(String[] args) {
        PrintSpooler spooler = PrintSpooler.getInstance();

        Thread threadOne = new Thread(() -> {PrintSpooler s = PrintSpooler.getInstance();});

        Thread threadTwo = new Thread(() -> {PrintSpooler r = PrintSpooler.getInstance();});

        threadOne.start();
        threadTwo.start();
    }
}
