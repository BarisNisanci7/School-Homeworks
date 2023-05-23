#include <iostream>
#include <string.h>
#include "RacingVehicle.h"
using namespace std;

#ifndef FORMULACAR_H
#define FORMULACAR_H

class FormulaCar:public RacingVehicle{
public:
    FormulaCar(string type, double speed, double handle, string manufactur, string Model, string driver): RacingVehicle(type, speed, handle, manufactur, Model, driver) {}
    
    double race(Track track) override;

private:
    double aerodynamics = 1.3;
};

#endif