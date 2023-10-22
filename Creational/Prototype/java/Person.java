
public class Person implements Cloneable {

    private String name;

    public Person() {
    }

    public Person(String name)
    {
        this.name = name;
    }

    public String getName()
    {
        return name;
    }

    @Override
    public Person clone() {
        try {
            return (Person) super.clone();
        } catch (CloneNotSupportedException ex) {
            throw new AssertionError();
        }
    }

}
