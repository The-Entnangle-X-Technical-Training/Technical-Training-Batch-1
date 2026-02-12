#include <iostream>
using namespace std;

int main()
{
    int totalDays;
    int years, weeks, days;

    cout << "Enter total number of days: ";
    cin >> totalDays;

    years = totalDays / 365;
    totalDays = totalDays % 365;

    weeks = totalDays / 7;
    days = totalDays % 7;

    cout << "Years = " << years << endl;
    cout << "Weeks = " << weeks << endl;
    cout << "Days = " << days << endl;

    return 0;
}
