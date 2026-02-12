//Write a program that takes password length, count of uppercase letters, lowercase letters, and digits as
//separate inputs. Check if password is Strong (length≥8, has uppercase, lowercase, digits), Medium
//(length≥6, any 2 types), or Weak.

#include <iostream>
using namespace std;

int main() {
    int length, upper, lower, digits;

    cout << "Enter password length: ";
    cin >> length;

    cout << "Enter count of uppercase letters: ";
    cin >> upper;

    cout << "Enter count of lowercase letters: ";
    cin >> lower;

    cout << "Enter count of digits: ";
    cin >> digits;

    if(length >= 8 && upper > 0 && lower > 0 && digits > 0) {
        cout << "Password Strength: Strong";
    }
    else if(length >= 6 && 
           ((upper > 0 && lower > 0) ||
            (upper > 0 && digits > 0) ||
            (lower > 0 && digits > 0))) {
        cout << "Password Strength: Medium";
    }
    else {
        cout << "Password Strength: Weak";
    }

    return 0;
}
