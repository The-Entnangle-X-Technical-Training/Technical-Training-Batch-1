#include <iostream>
using namespace std;

int main() {
    int day, month;
    
    
    cout << "Enter day (1-31): ";
    cin >> day;
    cout << "Enter month (1-12): ";
    cin >> month;

    bool valid = false;

    if (month >= 1 && month <= 12) {
        if (month == 2) {
            if (day >= 1 && day <= 29) // Simple check, ignoring leap year specifics
                valid = true;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day >= 1 && day <= 30)
                valid = true;
        } else { // Months with 31 days
            if (day >= 1 && day <= 31)
                valid = true;
        }
    }

    if (valid) {
        cout << "Valid date" << endl;
    } else {
        cout << "Invalid date" << endl;
    }

    return 0;
}
