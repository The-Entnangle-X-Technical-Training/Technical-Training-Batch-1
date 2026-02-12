//Problem 26: Valid Date Checker (Simple)

#include <iostream>
using namespace std;

int main() {
    int day, month;

    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter day: ";
    cin >> day;

    if (month < 1 || month > 12) {
        cout << "Invalid";
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day >= 1 && day <= 30)
            cout << "Valid";
        else
            cout << "Invalid";
    }
    else if (month == 2) {
        if (day >= 1 && day <= 29)   
            cout << "Valid";
        else
            cout << "Invalid";
    }
    else {
        if (day >= 1 && day <= 31)
            cout << "Valid";
        else
            cout << "Invalid";
    }

    return 0;
}
