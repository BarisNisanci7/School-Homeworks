#include <iostream>
#include <string>
using namespace std;

#ifndef PLANET_H
#define PLANET_H

class Planet {
private:
	string name;
	double distanceFromSun;
	double diameter;

public:
	Planet(string Name = "Unknown", double DistanceFromSun = 0.0, double Diameter = 0.0) :
		name(Name), distanceFromSun(DistanceFromSun), diameter(Diameter) {
	}

	string getName() const;

	double getDistanceFromSun() const;

	double getDiameter() const;

	double distanceTo(const Planet& destination) const;

};

#endif