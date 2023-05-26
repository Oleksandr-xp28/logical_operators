// logical_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int numbers[7];

    cout << "Enter 7 integers:" << endl;
    cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4] >> numbers[5] >> numbers[6];

    int maximum = numbers[0];

    if (numbers[1] > maximum)
        maximum = numbers[1];

    if (numbers[2] > maximum)
        maximum = numbers[2];

    if (numbers[3] > maximum)
        maximum = numbers[3];

    if (numbers[4] > maximum)
        maximum = numbers[4];

    if (numbers[5] > maximum)
        maximum = numbers[5];

    if (numbers[6] > maximum)
        maximum = numbers[6];

    cout << "The maximum number is: " << maximum << endl;

    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu