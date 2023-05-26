// logical_operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double sales1, sales2, sales3;
    double salary1, salary2, salary3;

    cout << "Enter the sales level for manager 1: ";
    cin >> sales1;

    cout << "Enter the sales level for manager 2: ";
    cin >> sales2;

    cout << "Enter the sales level for manager 3: ";
    cin >> sales3;


    if (sales1 <= 500) {
        salary1 = 200 + sales1 * 0.03;
    }
    else if (sales1 <= 1000) {
        salary1 = 200 + sales1 * 0.05;
    }
    else {
        salary1 = 200 + sales1 * 0.08;
    }

    if (sales2 <= 500) {
        salary2 = 200 + sales2 * 0.03;
    }
    else if (sales2 <= 1000) {
        salary2 = 200 + sales2 * 0.05;
    }
    else {
        salary2 = 200 + sales2 * 0.08;
    }

    if (sales3 <= 500) {
        salary3 = 200 + sales3 * 0.03;
    }
    else if (sales3 <= 1000) {
        salary3 = 200 + sales3 * 0.05;
    }
    else {
        salary3 = 200 + sales3 * 0.08;
    }

    double maxSalary = max(max(salary1, salary2), salary3);
    if (maxSalary == salary1) {
        salary1 += 200;
    }
    else if (maxSalary == salary2) {
        salary2 += 200;
    }
    else {
        salary3 += 200;
    }

    cout << "Salary for manager 1: $" << salary1 << endl;
    cout << "Salary for manager 2: $" << salary2 << endl;
    cout << "Salary for manager 3: $" << salary3 << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu