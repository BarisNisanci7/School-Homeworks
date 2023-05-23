#include <iostream>
#include <string>
#include "Planet.h"
using namespace std;

#ifndef SPACEHSHIP_H
#define SPACEHSHIP_H

class Spaceship {
private:
	string name;
	double fuel;
	Planet* currentLocation;

public:
	Spaceship(string Name, double Fuel) :
		name(Name), fuel(Fuel), currentLocation(nullptr) {
	}
	
	string getName() const;

	double getFuel();

	Planet* getCurrentLocation() const;

	void travel(Planet& destination, double fuelPerDistance);

	inline void displayInfo();

};

#endif
