// Don't want the GUI or button classes to hold information about what happens
// when the buttons are clicked
// Want to be able to define look and feel in the GUI, 
// but not the functionality of the button clicks

// Button class is the invoker
public class Button
{
    String text;

    public Button(String text)
    {
        this.text = text;
    }

    // provides with a layer of abstraction
    // between the GUI and the functionality
    public void click(Command command)
    {
        command.execute();
    }
}