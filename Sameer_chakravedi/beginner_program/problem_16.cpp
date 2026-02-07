// Problem 16: Days to Years, Weeks, Days Converter
// Write a program that takes total number of days as input and converts it into years, weeks, and remaining
// days, then displays all three values.
#include <iostream>
using namespace std;

int main() {
    int NumberOfDays = 0;
    int years = 0;
    int weeks = 0;
    int days = 0;
    cout << "Enter number of days: ";
    cin >> NumberOfDays;

    years = NumberOfDays / 365;
    NumberOfDays = NumberOfDays % 365;
    weeks = NumberOfDays / 7;
    days = NumberOfDays % 7;
    cout << "Years: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;
    
    return 0;
}
