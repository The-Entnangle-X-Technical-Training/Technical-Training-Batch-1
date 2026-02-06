#include <iostream>
using namespace std;

int main()
{
    int inputDays, years, weeks, days;

    cout << "Enter total days: ";
    cin >> inputDays;

    years = inputDays / 365;
    inputDays = inputDays % 365;
    weeks = inputDays / 7;
    days = inputDays % 7;

    cout << "Years = " << years << endl;
    cout << "Weeks = " << weeks << endl;
    cout << "Days = " << days;

    return 0;
}
