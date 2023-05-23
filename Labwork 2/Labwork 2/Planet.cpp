#include "Planet.h"

string Planet::getName() const {
	return name;
}

double Planet::getDistanceFromSun() const {
	return distanceFromSun;
}

double Planet::getDiameter() const {
	return diameter;
}

double Planet::distanceTo(const Planet& destination) const {
	return abs(distanceFromSun - destination.distanceFromSun);
}