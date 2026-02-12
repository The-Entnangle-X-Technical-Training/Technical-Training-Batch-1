//Write a program that takes month number (1-12) and year as input, and displays the number of days in
//that month (handle leap year for February).

#include <iostream>
using namespace std;

int main() {
    int month, year, days;

    cout << "Enter month (1-12): ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    if(month == 1 || month == 3 || month == 5 || month == 7 ||
       month == 8 || month == 10 || month == 12) {
        days = 31;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    }
    else if(month == 2) {
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            days = 29;
        }
        else {
            days = 28;
        }
    }
    else {
        cout << "Invalid month";
        return 0;
    }

    cout << "Number of days = " << days;

    return 0;
}
