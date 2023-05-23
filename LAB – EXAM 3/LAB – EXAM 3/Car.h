#include <iostream>
#include <string.h>
#include "RacingVehicle.h"
using namespace std;

#ifndef CAR_H
#define CAR_H

class Car :public RacingVehicle {
public:
    Car(string type, double speed, double handle, string manufactur, string Model, string driver) : RacingVehicle(type, speed, handle, manufactur, Model, driver) {}

    double race(Track track) override;

private:
    double aerodynamics = 1.1;
};

#endif