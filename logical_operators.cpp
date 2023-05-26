// logical_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
// feature/hw/ex_4

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double cargoWeight;
    std::cout << "Enter the weight of the cargo in kg: ";
    std::cin >> cargoWeight;

    double fuelConsumption;

    if (cargoWeight <= 500) {
        fuelConsumption = cargoWeight * 1; // 1 liter/km
    }
    else if (cargoWeight <= 1000) {
        fuelConsumption = cargoWeight * 4; // 4 liters/km
    }
    else {
        std::cout << "Cargo weight exceeds the maximum capacity." << std::endl;
        return 0;
    }

    std::cout << "The fuel consumption for the given cargo weight is: " << fuelConsumption << " liters/km" << std::endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu