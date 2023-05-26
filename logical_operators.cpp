// logical_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
// feature/hw/ex_4

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double distanceAB, distanceBC, cargoWeight;
    const double tankCapacity = 300.0;

    cout << "Enter the distance between points A and B in km: ";
    cin >> distanceAB;

    cout << "Enter the distance between points B and C in km: ";
    cin >> distanceBC;

    cout << "Enter the weight of the cargo in kg: ";
    cin >> cargoWeight;

    double fuelConsumption = 0.0;

    if (cargoWeight <= 500) {
        fuelConsumption = cargoWeight * 1.0; 
    }
    else if (cargoWeight <= 1000) {
        fuelConsumption = cargoWeight * 4.0;
    }
    else if (cargoWeight <= 1500) {
        fuelConsumption = cargoWeight * 7.0; 
    }
    else if (cargoWeight <= 2000) {
        fuelConsumption = cargoWeight * 9.0; 
    }
    else {
        cout << "Cargo weight exceeds the maximum capacity." << endl;
        return 0;
    }

    double totalFuelRequired = (distanceAB + distanceBC) * fuelConsumption;

    if (totalFuelRequired > tankCapacity) {
        cout << "It is impossible to cover the distance with the available fuel capacity." << endl;
    }
    else {
        double refuelAmount = tankCapacity - totalFuelRequired;
        cout << "Minimum fuel required for the route: " << totalFuelRequired << " liters" << endl;
        cout << "Fuel to be refueled at point B: " << refuelAmount << " liters" << endl;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu