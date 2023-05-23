#include "RacingVehicle.h"

RacingVehicle::RacingVehicle(string type, double speed, double handle, string manufactur, string Model, string driver) {
    this->vehicleType = type;
    this->topSpeed = speed;
    this->handling = handle;
    this->manufacturer = manufactur;
    this->model = Model;
    this->driverName = driver;
}

void RacingVehicle::display() {
    cout << "Vehicle Type: " << vehicleType << endl;
    cout << "Top Speed: " << topSpeed << endl;
    cout << "Handling: " << handling << endl;
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Model: " << model << endl;
    cout << "Driver Name: " << driverName << endl << endl;
}

double RacingVehicle::race(Track track) {

    double lapTime = track.getLength() / (topSpeed * handling);

    return lapTime;
}

void RacingVehicle::tuning(double topSpeedIncrease, double handlingIncrease) {
    topSpeed *= (1 + topSpeedIncrease / 100);
    handling *= (1 + handlingIncrease / 100);
}