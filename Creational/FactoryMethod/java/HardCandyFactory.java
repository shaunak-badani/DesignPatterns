import java.util.ArrayList;

public class HardCandyFactory extends CandyFactory {

    @Override
    public Candy getCandy(String section) {
        switch(section)
        {
            case "candycane":
                return new HardCandy_CandyCane();
            case "lollipop":
                return new HardCandy_Lollipop();
            case "peppermint":
                return new HardCandy_Peppermint();
            default:
                return new HardCandy_CandyCane();
        }
    }

    @Override
    public ArrayList getCandyPackage(int quantity, String type) 
    {
        if (quantity % 10 != 0) {
            System.out.println("Hard candy must be packaged in multiples of 10.");
            return null;
        }
        return super.getCandyPackage(quantity, type);
    }
    
}
