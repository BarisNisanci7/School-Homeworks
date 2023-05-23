#include "Spaceship.h"

string Spaceship::getName() const {
	return name;
}

double Spaceship::getFuel() {
	return fuel;
}

Planet* Spaceship::getCurrentLocation() const {
	return currentLocation;
}

void Spaceship::travel(Planet& destination, double fuelPerDistance) {

    if(getCurrentLocation() == nullptr) { // spaceship has no start point
        currentLocation = new Planet(destination.getName(), destination.getDistanceFromSun(), destination.getDiameter());
        cout << "Starting at " << currentLocation->getName();
        displayInfo();
    }
    else if(currentLocation->getDistanceFromSun() == destination.getDistanceFromSun()){ // if the user select the currentPosition of the ship
        cout << "You have already at this planet!" << endl;
        displayInfo();
    }
    else {

        double distance = currentLocation->distanceTo(destination);
        double requiredFuel = distance * fuelPerDistance;

        if (requiredFuel <= fuel) {
            currentLocation = new Planet(destination.getName(), destination.getDistanceFromSun(), destination.getDiameter());
            fuel -= requiredFuel;
            cout << "Successfuly traveled to " << currentLocation->getName() << "!";
            displayInfo();
        }
        else {
            cout << "Fuel is not enough to go to " << destination.getName();
            displayInfo();
        }
    }

}

inline void Spaceship::displayInfo() {
	cout << endl << "Name: " << getName() << endl;
	cout << "Fuel: " << getFuel() << " units" << endl;
	if (currentLocation != nullptr) {
		cout << "Current Location: " << currentLocation->getName() << endl << endl;
	}
	else {
		cout << "Current Location: Not Set" << endl << endl;
	}
}