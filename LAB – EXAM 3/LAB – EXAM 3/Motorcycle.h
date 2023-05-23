#include <iostream>
#include <string.h>
#include "RacingVehicle.h"
using namespace std;

#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

class Motorcycle :public RacingVehicle {
public:
    Motorcycle(string type, double speed, double handle, string manufactur, string Model, string driver) : RacingVehicle(type, speed, handle, manufactur, Model, driver) {}

    double race(Track track) override;

private:
    double aerodynamics = 1.2;
};


#endif