import java.awt.Color;
import java.awt.Graphics;

public class ComponentWithRedBorder implements Component {
    Component decoratedComponent;


    public ComponentWithRedBorder(Component component)
    {
        decoratedComponent = component;
    }

    public void draw(Graphics graphics) {
        graphics.setColor(Color.RED);

        decoratedComponent.draw(graphics);

        graphics.setColor(Color.BLACK);
    }
}
