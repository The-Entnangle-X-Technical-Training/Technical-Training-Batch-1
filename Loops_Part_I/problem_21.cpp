// Problem 21: Find Largest Digit in a Number
// Write a program that takes a number and finds the largest digit in it using a loop.

#include <iostream>
using namespace std;

int main(){
    int Number = 0;
    int largestDigit = 0;
    cout <<" Enter a Number : ";
    cin >> Number;
    
    while(Number > 0){
        int digit = Number % 10; 
        if( largestDigit < digit){
            largestDigit = digit;
        }
        Number /= 10;
    }
    cout << "the largest digit in the number is : "<<largestDigit;
    return 0;
}