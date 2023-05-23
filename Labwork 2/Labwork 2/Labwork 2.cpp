#include <iostream>
#include "Planet.h"
#include "Spaceship.h"
using namespace std;


void printPlanets(Planet planets[]){
    cout << "Planets that you can go:" << endl;
    for (int i = 0; i < 9; i++) {
        cout << i + 1 << ". " << planets[i].getName() << " - Distance from Sun: " << planets[i].getDistanceFromSun() << " km, Diameter: " << planets[i].getDiameter() << " km" << endl;
    }
    cout << endl;
}

int main()
{
    
    Planet planets[9] = {
        Planet("Mercury", 5.791e+07, 4879), //
        Planet("Venus", 1.082e+08, 12104),
        Planet("Earth", 1.496e+08, 12742),
        Planet("Mars", 2.279e+08, 6779),
        Planet("Jupiter", 7.783e+08, 139822),
        Planet("Saturn", 1.42e+09, 116460),
        Planet("Uranus", 2.87e+09, 50724),
        Planet("Neptune", 4.5e+09, 49244),
        Planet("Pluto", 5.91e+09, 2370)
    };

    
    string spaceshipName;
    double initialFuel;
    cout << "Enter your spaceship's name: ";
    getline(cin, spaceshipName);
    cout << "Enter the initial fuel of your spaceship (in units): ";
    cin >> initialFuel;
    Spaceship spaceship(spaceshipName, initialFuel);

    spaceship.displayInfo();

    int count = 0;

    while (true) {

        printPlanets(planets);
        
        int choice;
        do { // choice menu
            cout << "Select the planet to travel to [1-9] or enter 0 to exit: ";
            cin >> choice;
            if (choice == 0) {
                break;
            }
            else if (choice < 0 || choice > 9) {
                cout << "Select a valid number!!!" << endl;
                count++; // just choose an invalid number for 3 times
            }

        } while ( (choice < 0 || choice > 9) && count < 3);
        cout << endl;


        if (choice == 0 || count == 3) {
            break;
        }

        Planet destination = planets[choice - 1];
        spaceship.travel(destination, 0.000001);

    }

    if (count == 3) {
        cout << "You are the worst pilot I've ever seen!!!" << endl << endl;
    }
    else {
        spaceship.displayInfo();
    }

    cout << "This code written by Baris Nisanci 20070001019 for labwork 2" << endl;

}

