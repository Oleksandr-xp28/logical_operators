// logical_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
// feature/hw/ex_4

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double cargoWeight;
    cout << "Enter the weight in kg: ";
    cin >> cargoWeight;

    double fuelConsumption;

    if (cargoWeight <= 500) {
        fuelConsumption = cargoWeight * 1; 
    }
    else if (cargoWeight <= 1000) {
        fuelConsumption = cargoWeight * 4;
    }
    else {
        std::cout << "Cargo weight maximum ." << endl;
        return 0;
    }

    cout << "The fuel: cargo weight is: " << fuelConsumption << " liters/km" << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu