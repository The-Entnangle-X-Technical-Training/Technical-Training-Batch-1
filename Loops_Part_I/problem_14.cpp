// Problem 14: Sum of Digits using Loop
// Write a program that takes a number and calculates the sum of its digits using a loop.
// Hint: Extract last digit using %10, add to sum, remove last digit using /10

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int SumOfDigit = 0;
    int lastDigit = 0;
    cout <<" Enter a number : ";
    cin >> number;
    while(number > 0){
        lastDigit = number % 10;
        SumOfDigit += lastDigit;
        number /= 10;
    }
    cout << "the Sum of digits in the number is : "<<SumOfDigit;
    return 0;
}