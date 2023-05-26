// logical_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a four-digit number: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Error: You did not enter a four-digit number." << endl;
        return 0;
    }

    int digit1 = number / 1000;  
    int digit2 = (number / 100) % 10;  
    int digit3 = (number / 10) % 10;  
    int digit4 = number % 10;  

    int newNumber = digit3 * 1000 + digit4 * 100 + digit1 * 10 + digit2;

    cout << "Original number: " << number << endl;
    cout << "Modified number: " << newNumber << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu