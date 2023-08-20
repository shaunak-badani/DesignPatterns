#ifndef ROOM_LIST_BUILDER_H
#define ROOM_LIST_BUILDER_H
#include "Room.h"
#include <vector>
#include "RoomBuilder.h"

class RoomListBuilder
{
    private:
        std::vector<Room> listOfRooms;

    public:
        RoomListBuilder* addList() 
        {
            this->listOfRooms = *(new std::vector<Room>());
            return this;
        }

        RoomListBuilder* addRoom(Room room)
        {
            this->listOfRooms.push_back(room);
            return this;
        }

        RoomBuilder* addRoom()
        {
            return new RoomBuilder(this);
        }

        std::vector<Room> buildList()
        {
            return this->listOfRooms;
        }
};

#endif