//Write a program that takes a 4-digit number and calculates the average of its first and last digits.

#include <iostream>
using namespace std;
int main() {
    int num = 0;
    cout << "enter a 4 digit number";
    cin >> num;

    int firstDigit = num / 1000;
    int lastDigit = num % 10;

    double average = (firstDigit + lastDigit) / 2.0;

    cout << "average of first and last digit is: " << average << endl;

    return 0 ;

}