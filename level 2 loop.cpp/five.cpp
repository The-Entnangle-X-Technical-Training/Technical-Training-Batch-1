//Write a program that takes a number and calculates the sum of its digits using a loop.
//Hint: Extract last digit using %10, add to sum, remove last digit using /10

#include<iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;

    cout << "enter a number";
    cin >> number;

    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    cout << "sum of digit int the number is:" << sum << endl;
}