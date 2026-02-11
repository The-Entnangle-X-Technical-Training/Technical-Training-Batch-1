//simple interest with total

#include <iostream>
using namespace std;

    int main()
    {
        double principal, rate, time, simpleInterest, totalAmount;

        cout << "Enter principal amount: ";
        cin >> principal;
        cout << "Enter rate of interest (per annum): ";
        cin >> rate;
        cout << "Enter time (in years): ";
        cin >> time;

        simpleInterest = (principal * rate * time) / 100;
        totalAmount = principal + simpleInterest;

        cout << "Simple Interest = " << simpleInterest << endl;
        cout << "Total Amount = " << totalAmount << endl;

        return 0;
    }