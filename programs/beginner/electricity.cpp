//Write a program that calculates electricity bill based on units consumed and rate per unit, then displays
//the total bill amount.

#include <iostream>
using namespace std;

int main() {
    float units, rate, totalBill;

    cout << "enter units consumed ";
    cin >> units;

    cout << "enter rate per unit";
    cin >> rate;

    totalBill = units * rate ;

    cout << "your total bill is: " << totalBill << endl;

    return 0;

}