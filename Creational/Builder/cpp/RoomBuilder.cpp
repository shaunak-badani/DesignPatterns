#include "RoomBuilder.h"
#include "RoomListBuilder.h"

RoomListBuilder* RoomBuilder::addRoomToList(){
    Room room = this->build();
    this->roomListBuilder->addRoom(room);
    return this->roomListBuilder;
}