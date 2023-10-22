import org.example.UKCarPriceCalculator;

public class Main {
    public static void main(String[] args) {
        CarPriceCalculator carPriceCalculator = new CarPriceCalculator("Ford", 34);
        printVehiclePrice(carPriceCalculator);

        TruckPriceCalculator truckPriceCalculator = new TruckPriceCalculator(10, 0);
        printVehiclePrice(truckPriceCalculator);

        UKCarPriceCalculator ukCarPriceCalculator = new UKCarPriceCalculator("BMW", 7);
        Adapter adapter = new Adapter(ukCarPriceCalculator);

        printVehiclePrice(adapter);
    }

    public static void printVehiclePrice(PriceCalculator calculator)
    {
        String price = calculator.calculatePrice();
        System.out.println("The price of the vehicle is : " + price);
    }
}
