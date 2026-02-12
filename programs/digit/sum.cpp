// Write a program that takes a 3-digit number as input and calculates the sum of all its digits, then displays
//the result.

#include <iostream>
using namespace std;
int main() {
    int num = 0;
    cout << "enter a 3 digit number";
    cin >> num;

    int digit1 = num / 100;
    int digit2 = (num / 10) % 10;
    int digit3 = num % 10;

    int sum = digit1 + digit2 + digit3;

    cout << "sum of all digits: " << sum << endl;
    return 0;
}