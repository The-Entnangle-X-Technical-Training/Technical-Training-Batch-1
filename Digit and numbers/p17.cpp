//17: Count Even Digits in a Number

#include <iostream>
using namespace std;

int main() {
    int number, digit1, digit2, digit3, digit4, count = 0;

    cout << "Enter a 4-digit number: ";
    cin >> number;

    digit1 = number % 10;
    digit2 = (number / 10) % 10;
    digit3 = (number / 100) % 10;
    digit4 = (number / 1000) % 10;

    if (digit1 % 2 == 0)
        count++;
    else
        count = count;

    if (digit2 % 2 == 0)
        count++;
    else
        count = count;

    if (digit3 % 2 == 0)
        count++;
    else
        count = count;

    if (digit4 % 2 == 0)
        count++;
    else
        count = count;

    cout << "Even digits count = " << count;
    return 0;
}

