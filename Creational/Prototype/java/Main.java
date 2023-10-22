
public class Main {
    public static void main(String[] args) {
        Rabbit rabbit = new Rabbit();
        rabbit.setAge(8);
        rabbit.setOwner("Sally");
        Rabbit rabbitCopy = rabbit.clone();
        System.out.println("Owner of first rabbit: " + rabbit.getOwner().getName());
        System.out.println("Owner of second rabbit: " + rabbitCopy.getOwner().getName());

        rabbitCopy.setOwner("Steve");
        System.out.println("Owner of first rabbit: " + rabbit.getOwner().getName());
        System.out.println("Owner of second rabbit: " + rabbitCopy.getOwner().getName());

    }    
    
}
