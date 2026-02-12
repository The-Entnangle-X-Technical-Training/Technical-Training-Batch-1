//Write a program that takes a number and counts how many digits it has.

#include<iostream>
using namespace std;

int main() {

    int number, count = 0;

    cout << "enter a number:";
    cin >> number;

    while (number != 0) {
        number = number / 10;
        count++;

    }
    cout << "number of digits:" << count << endl;
    
}