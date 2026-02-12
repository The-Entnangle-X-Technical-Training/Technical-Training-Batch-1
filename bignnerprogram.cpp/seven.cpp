#include <iostream>
using namespace std;

int main() {

    int principal = 0;
    double rate = 0.0;
    int time = 0;
    double simpleInterest = 0.0;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;

    simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest: " << simpleInterest << endl;
    return 0;
}

