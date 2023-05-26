// logical_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    int day1, month1, year1;
    int day2, month2, year2;

    std::cout << "Enter the first date (day month year): ";
    cin >> day1 >> month1 >> year1;

    cout << "Enter the second date (day month year): ";
    cin >> day2 >> month2 >> year2;

    int daysBetween = (day1, month1, year1, day2, month2, year2);

    cout << "Number of days between the two dates: " << daysBetween << std::endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu