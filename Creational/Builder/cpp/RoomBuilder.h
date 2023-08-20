#ifndef ROOM_BUILDER_H
#define ROOM_BUILDER_H
#include "Room.h"

class RoomListBuilder;

class RoomBuilder {

    private:
        int numberOfWindows;
        int numberOfDoors;
        int ceilingHeight;
        int floorNumber;

        RoomListBuilder* roomListBuilder;

    public:
        RoomBuilder() {}

        RoomBuilder(RoomListBuilder* roomListBuilder)
        {
            this->roomListBuilder = roomListBuilder;
        }

        RoomBuilder* setNumberOfWindows(int numberOfWindows)
        {
            this->numberOfWindows = numberOfWindows;
            return this;
        }

        RoomBuilder* setNumberOfDoors(int numberOfDoors)
        {
            this->numberOfDoors = numberOfDoors;
            return this;
        }

        RoomBuilder* setCeilingHeight(int ceilingHeight)
        {
            this->ceilingHeight = ceilingHeight;
            return this;
        }

        RoomBuilder* setFloorNumber(int floorNumber)
        {
            this->floorNumber = floorNumber;
            return this;
        }

        Room build()
        {
            return *(new Room(ceilingHeight, numberOfDoors, numberOfWindows, floorNumber));
        }

        RoomListBuilder* addRoomToList();
};

#endif