#include "RoomListBuilder.h"

int main()
{
    std::vector<Room> roomList = (new RoomListBuilder())->addList()
            ->addRoom()->setCeilingHeight(3)->addRoomToList()
            ->addRoom()->setFloorNumber(4)->setNumberOfWindows(9)->addRoomToList()
            ->buildList();
    return 0;
}