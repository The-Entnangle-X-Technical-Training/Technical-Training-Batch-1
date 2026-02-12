#include <iostream>
using namespace std;

int main() {
    int length, upperCount, lowerCount, digitCount;

    cout << "Enter password length: ";
    cin >> length;

    cout << "Enter number of uppercase letters: ";
    cin >> upperCount;

    cout << "Enter number of lowercase letters: ";
    cin >> lowerCount;

    cout << "Enter number of digits: ";
    cin >> digitCount;

    int typeCount = 0;
    if (upperCount > 0) typeCount++;
    if (lowerCount > 0) typeCount++;
    if (digitCount > 0) typeCount++;

  
    if (length >= 8 && typeCount == 3) {
        cout << "Password Strength: Strong" << endl;
    } 
    else if (length >= 6 && typeCount >= 2) {
        cout << "Password Strength: Medium" << endl;
    } 
    else {
        cout << "Password Strength: Weak" << endl;
    }

    return 0;
}
