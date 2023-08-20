package Behavioral.Memento.java;

import Creational.Builder.java.BedroomBuilder;

import java.awt.Color;
import java.awt.Dimension;

public interface Builder {
    public BedroomBuilder setDimensions(Dimension dimensions);

    public BedroomBuilder setCeilingHeight(int ceilingHeight);

    public BedroomBuilder setFloorNumber(int floorNumber);

    public BedroomBuilder setNumberOfWindows(int numberOfWindows);

    public BedroomBuilder setNumberOfDoors(int numberOfDoors);

    public BedroomBuilder setWallColor(Color wallColor);
}
