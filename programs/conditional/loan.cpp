//Write a program that checks loan eligibility based on: age (21-60), income (>25000), credit score (>700).
//Display "Eligible" only if all conditions are met, otherwise display which condition failed.

#include <iostream>
using namespace std;

int main() {
    int age, creditScore;
    float income;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter monthly income: ";
    cin >> income;

    cout << "Enter credit score: ";
    cin >> creditScore;

    if(age >= 21 && age <= 60 && income > 25000 && creditScore > 700) {
        cout << "Eligible";
    }
    else {
        cout << "Not Eligible\n";

        if(age < 21 || age > 60) {
            cout << "Age condition failed\n";
        }
        if(income <= 25000) {
            cout << "Income condition failed\n";
        }
        if(creditScore <= 700) {
            cout << "Credit score condition failed\n";
        }
    }

    return 0;
}
