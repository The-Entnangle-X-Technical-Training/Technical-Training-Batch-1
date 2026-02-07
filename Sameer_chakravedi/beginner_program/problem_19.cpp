// Problem 19: Simple Interest with Total Amount
// Write a program that takes principal amount, rate of interest, and time period as input, calculates simple
// interest and total amount (Principal + SI), then displays both values.
#include <iostream>
using namespace std;

int main() {
    int principal = 0;
    double InterestRate = 0.0;
    int time = 0;
    double SimpleInterest = 0.0;
    double Total_amonut = 0.0;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter Interest Rate (in %) months:";
    cin >> InterestRate;
    cout << "Enter time (in months): "; 
    cin >> time;
    SimpleInterest = (principal * InterestRate * time) / 100;
    Total_amonut = principal + SimpleInterest;
    cout << "SimpleInterest: " << SimpleInterest << endl;
    cout << "Total Amount: " << Total_amonut << endl;

    return 0;
}