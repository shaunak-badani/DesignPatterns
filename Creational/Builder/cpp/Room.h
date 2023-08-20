#ifndef ROOM_H
#define ROOM_H

class Room {
    private:
        int ceilingHeight;
        int numberOfDoors;
        int numberOfWindows;
        int floorNumber;

    public:
        Room(int ceilingHeight, int numberOfDoors, int numberOfWindows, int floorNumber)
        {
            this->ceilingHeight = ceilingHeight;
            this->numberOfDoors = numberOfDoors;
            this->numberOfWindows = numberOfWindows;
            this->floorNumber = floorNumber;
        }
};

#endif