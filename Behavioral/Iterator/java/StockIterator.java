import java.util.Iterator;

public class StockIterator implements Iterator
{
    private Inventory inventory;

    private int index;

    public StockIterator(Inventory inventory)
    {
        this.inventory = inventory;
        index = 0;
    }

    @Override
    public boolean hasNext()
    {
        return (index < inventory.getItems().length);
    }

    @Override
    public Item next()
    {
        if(hasNext()) 
        {
            Item item = inventory.getItems()[index++];
            if(item.getQuantity() > 0)
                return item;
            return next();
        }
        return null;
    }


}