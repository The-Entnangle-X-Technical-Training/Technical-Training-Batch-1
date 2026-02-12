//Days to Years, Weeks, Days Converter

#include <iostream>
using namespace std;

int main() {
    int totalDays, years, weeks, days, remainingDays;

    cout << "Enter total number of days: ";
    cin >> totalDays;

    years = totalDays / 365;
    remainingDays = totalDays % 365;

    weeks = remainingDays / 7;
    days = remainingDays % 7;

    cout << "Years: " << years << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;

    return 0;
}