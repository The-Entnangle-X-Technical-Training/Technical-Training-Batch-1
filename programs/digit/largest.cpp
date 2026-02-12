//Write a program that takes a 4-digit number as input and finds the largest digit in it, then displays that
//digit.

#include <iostream>
using namespace std;
int main() {
    int num = 0;
    cout << "enter a 4 digit number";
    cin >> num;

    int digit1 = num / 1000;
    int digit2 = (num / 100) % 10;
    int digit3 = (num / 10) % 10;
    int digit4 = num % 10;

    int largest = digit1;
    if (digit2 > largest) largest = digit2;
    if (digit3 > largest) largest = digit3;
    if (digit4 > largest) largest = digit4;

    cout << "Largest digit is: " << largest;

    return 0;
}