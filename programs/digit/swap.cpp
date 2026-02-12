//Write a program that takes a 3-digit number as input and swaps its first and last digits, then displays the
//result (e.g., 456 becomes 654)

#include <iostream>
using namespace std;
int main() {
    int num = 0;
    cout << "enter a 3 digit number";
    cin >> num;

    int firstDigit = num / 100;
    int middleDigit = (num % 10) / 10;
    int lastDigit = num % 10;

    int swap = lastDigit * 100 + middleDigit * 10 + firstDigit;
    cout << "after swapping" << endl;

    return 0;

}