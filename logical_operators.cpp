// logical_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdexcept>
#include <windows.h>
#include "logical_operators.h"
using namespace std;


bool isHappy(int number) {
    int sum1 = 0;
    int sum2 = 0;

    int digit;
    for (int i = 0; i < 3; i++) {
        digit = number % 10;
        sum1 += digit;
        number /= 10;
    }

    for (int i = 0; i < 3; i++) {
        digit = number % 10;
        sum2 += digit;
        number /= 10;
    }

    return (sum1 == sum2);
}

int main() {
    string sixDigit;
    cout << "Enter a six-digit number: ";
    cin >> sixDigit;

    if (sixDigit.length() != 6) {
        cout << "Error" << endl;
        return 0;
    }

    int number;
    try {
        number = stoi(sixDigit);
    }
    catch (const exception& e) {
        cout << "Error: Invalid input." << endl;
        return 0;
    }

    if (isHappy(number)) {
        cout << "Congratulations! You entered a lucky number." << endl;
    }
    else {
        cout << "Sorry, the entered number is not a lucky number." << endl;
    }

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu