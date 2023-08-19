public class Mediator {
    private Customer customer;

    private EcommerceSite site;

    private Driver driver;

    public Mediator()
    {
        customer = new Customer("123 Sunny Street");
        site = new EcommerceSite();
        driver = new Driver();
    }

    public void buy(String item, int quantity)
    {
        if(site.checkInStock(item, quantity))
        {
            site.sell(item, quantity);
            driver.deliver(item, quantity, customer);
        }
    }
}
