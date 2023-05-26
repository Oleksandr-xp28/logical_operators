// logical_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int number;
    cout << "Enter a six-digit number: ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        cout << "Error: You did not enter a six-digit number." << endl;
        return 0;
    }

    int firstSum = (number / 100000) + ((number / 10000) % 10) + ((number / 1000) % 10);
    int secondSum = ((number / 100) % 10) + ((number / 10) % 10) + (number % 10);

    if (firstSum == secondSum) {
        cout << "Congratulations! You entered a lucky number." << endl;
    }
    else {
        cout << "Sorry, the entered number is not a lucky number." << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu