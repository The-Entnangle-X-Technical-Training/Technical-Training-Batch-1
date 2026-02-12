// Problem 16: Product of Digits
// Write a program that takes a number and calculates the product of all its digits using a loop.

#include <iostream>
using namespace std;

int main(){
    int Number = 0;
    int digit = 0;
    int product = 1;
    cout <<" Enter a Number : ";
    cin >> Number;
    
    while (Number >0){
        digit = Number %10;
        product *= digit ;
        Number /= 10;
    }
    cout << "the product of number  is : "<<product;
    return 0;   
}