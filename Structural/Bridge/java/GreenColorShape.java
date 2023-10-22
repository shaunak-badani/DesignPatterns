import java.awt.Graphics;
import java.awt.Color;

public class GreenColorShape implements ColorShape {
    
    @Override
    public void setColor(Graphics graphics)
    {
        graphics.setColor(Color.GREEN);
    }
}
