
public class Rabbit implements Cloneable {

    public enum Breed {
        HIMALAYAN,
        AMERICAN,
        MINI_REX,
        LIONHEAD,
        DUTCH
    }

    //Age in months
    private int age;
    private Breed breed;
    private Person owner;

    public Person getOwner()
    {
        return owner;
    }


    public Rabbit() {
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setOwner(String name) {
        Person owner = new Person(name);
        this.owner = owner;
    }

    public int getAge() {
        return age;
    }

    public void setBreed(Breed breed) {
        this.breed = breed;
    }

    public Breed getBreed() {
        return breed;
    }

    @Override
    public Rabbit clone() {
        try {
            return (Rabbit) super.clone();
        } catch (CloneNotSupportedException ex) {
            throw new AssertionError();
        }
    }

}
