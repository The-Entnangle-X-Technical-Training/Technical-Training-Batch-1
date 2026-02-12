//Problem 4: Sum and Average of Three Numbers
//Write a program that takes three numbers as input and calculates their sum and average, then displays
//both results.

#include <iostream>
using namespace std;

int main() {
    
    int numberOne = 0;
    int numberTwo = 0;
    int numberThree = 0;
    
    int addition = 0;
    double average = 0.0;

    cout << "Enter first number: ";
    cin >> numberOne;

    cout << "Enter second number: ";
    cin >> numberTwo;

    cout << "Enter third number: ";
    cin >> numberThree;

    addition = numberOne + numberTwo + numberThree;
    average = addition / 3.0;

    cout << "Addition: " << addition << endl;
    cout << "Average: " << average << endl;

    return 0;
}