//Write a program that takes a number and finds the largest digit in it using a loop.

#include<iostream>
using namespace std;

int main() {

    int number = 0;
    int largestDigit = 0;

    cout << " enter a number" ;
    cin >> number;

    while (number != 0) {
        int lastDigit = number % 10;
        if (lastDigit > largestDigit) {
            largestDigit = lastDigit;
        }
        number /= 10;
    }
    cout << "The largest digit is: " << largestDigit << endl;
}