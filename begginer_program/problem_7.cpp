// Problem 7: Simple Interest Calculator
// Write a program that calculates simple interest using the formula: SI = (P × R × T) / 100, where P is
// principal, R is rate, and T is time.

#include <iostream>
using namespace std;

int main() {
    int principal=0;
    int  rate =0;
    int time =0;
    double simple_interest;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter interest rate of months: ";
    cin >> rate;
    cout << "Enter time (in months): ";
    cin >> time;
    simple_interest = (principal * rate * time) / 100.0;
    cout << "Simple Interest is: " << simple_interest << endl;

    return 0;
}