#include <iostream>
#include "RacingVehicle.h"
#include "FormulaCar.h"
#include "Motorcycle.h"
#include "Car.h"
using namespace std;

int main()
{
    cout << "1-";
    FormulaCar myFormulaCar("Formula-1", 300, 0.95, "Ferrari","F2003-GA", "Michael Schumacher");
    myFormulaCar.display();

    cout << "2-";
    Car myCar("Drift Car", 200, 0.7, "Nissan", "Silvia S15", "Baris Nisanci");
    myCar.display();
    
    cout << "3-";
    Motorcycle myMotorcycle("Super Sport", 180, 0.9, "Suzuki", "Hayabusa", "AEA");
    myMotorcycle.display();


    Track track("Spa-Francorchamps", 50, 0.20, 0.40, 0.30, 0.10);
    track.display();


    cout << "Race Starts ..." << endl << endl;

    cout << "Formula-1 Race Time: " << myFormulaCar.race(track) << " minutes" << endl;
    cout << "Car Race Time: " << myCar.race(track) << " minutes" << endl;
    cout << "Motorcycle Race Time: " << myMotorcycle.race(track) << " minutes" << endl;


    cout << endl << "After tuning: " << endl << endl;

    myFormulaCar.tuning(10,20);
    myCar.tuning(10,30);
    myMotorcycle.tuning(10,15);

    myFormulaCar.display();
    myCar.display();
    myMotorcycle.display();

    cout << "Formula-1 Race Time: " << myFormulaCar.race(track) << " minutes" << endl;
    cout << "Car Race Time: " << myCar.race(track) << " minutes" << endl;
    cout << "Motorcycle Race Time: " << myMotorcycle.race(track) << " minutes" << endl << endl;


    cout << "This code written by Baris Nisanci 20070001019 for LAB-EXAM 3" << endl;

    return 0;
}
