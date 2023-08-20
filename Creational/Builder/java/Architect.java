
import java.awt.Color;
import java.awt.Dimension;
import java.util.ArrayList;

public class Architect {
    public static void main(String[] args) {
        Bedroom room = new BedroomBuilder()
                .setDimensions(new Dimension(20, 69))
                .setCeilingHeight(100)
                .setFloorNumber(5)
                .setWallColor(Color.yellow)
                .setNumberOfWindows(7)
                .setNumberOfDoors(4)
                .setDouble(true)
                .setEnsuite(false)
                .build();

        ArrayList<Room> rooms = new RoomListBuilder().addList()
            .addRoom().setFloorNumber(3).addRoomToList()
            .addRoom().setFloorNumber(4).addRoomToList()
            .buildList();
    }
}
