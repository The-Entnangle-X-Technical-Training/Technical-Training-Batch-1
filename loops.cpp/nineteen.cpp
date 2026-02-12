//Write a program that takes a number and calculates the sum of its digits

#include<iostream>
using namespace std;

int main() {

    int number, sum = 0;

    cout << "enter a number:";
    cin >> number;

    while (number != 0) {
        sum = sum + number % 10;
        number = number / 10;

    }
    cout << "sum of digits:" << sum << endl;
    
}