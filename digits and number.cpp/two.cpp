//Write a program that takes a number as input and displays the number after removing its last digit

#include<iostream>
using namespace std;

int main() {

    int number = 0;
    int newNumber = 0;

    cout << "Enter a number: ";
    cin >> number;

    newNumber = number / 10;

    cout << "The number after removing the last digit is: " << newNumber << endl;
    return 0;
}