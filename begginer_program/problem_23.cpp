// Problem 23: Electricity Bill Calculator
// Write a program that calculates electricity bill based on units consumed and rate per unit, then displays
// the total bill amount.

#include <iostream>
using namespace std;
int main(){
    double UnitConsume = 0;
    int RatePerUnit = 0;
    cout << "Enter Unit Consumed: ";
    cin >> UnitConsume;
    cout << "Enter Rate Per Unit: ";
    cin >> RatePerUnit;
    cout << "Total Bill Amount: " << UnitConsume * RatePerUnit << endl;

    return 0;
}