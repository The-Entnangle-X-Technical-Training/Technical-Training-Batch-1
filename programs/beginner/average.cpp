//Write a program that takes three numbers as input and calculates their sum and average, then displays
//both results

#include <iostream>
using namespace std;

int main() {
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int sum = 0;
    int average = 0;45

    cout << "enter number 1: ";
    cin >> number1;

    cout << "enter number 2:";
    cin >> number2;

    cout << "enter number 3";
    cin >> number3;

    sum = number1 + number2 + number3;
    cout << "sum is: " << sum << endl;
    
    average = sum / 3;
    cout << " average is: " << average << endl;

    return 0;
}