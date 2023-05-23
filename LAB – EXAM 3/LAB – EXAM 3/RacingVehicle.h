#include <iostream>
#include <string.h>
#include "Track.h"
using namespace std;

#ifndef RACINGVEHICLE_H
#define RACINGVEHICLE_H

class RacingVehicle {
protected:
    string vehicleType;
    double topSpeed;
    double handling;
    string manufacturer;
    string model;
    string driverName;

public:
    RacingVehicle(string type, double speed, double handle, string manufactur, string Model, string driver);
    void display();
    virtual double race(Track track) = 0;
    void tuning(double topSpeedIncrease = 0, double handlingIncrease = 0);
};

#endif