//Write a program that takes any number as input and extracts and displays the last digit of that number.

#include <iostream>
using namespace std;
int main() {
    int num = 0;
    cout << "enter a number";
    cin>>num;

    int lastDigit = num % 10;
    cout << "last digit is: " << lastDigit << endl;

    return 0;
}