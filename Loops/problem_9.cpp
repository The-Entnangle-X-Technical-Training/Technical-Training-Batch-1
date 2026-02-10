// Problem 9: Sum of First N Numbers
// Write a program that takes N as input and calculates the sum of first N natural numbers.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout <<" Enter a number : ";
    cin >> number;
    int sumOFNumber = 0;
    for(int i = 1 ; i <=number ; i++){
        sumOFNumber += i;
    }
    cout<< "sum of first n natural number : "<< sumOFNumber;
    return 0;
}