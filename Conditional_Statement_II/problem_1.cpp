// Problem 1: Positive, Negative, or Zero
// Write a program that takes a number as input and displays whether it is positive, negative, or zero.

#include <iostream>
using namespace std;

int main(){

    int number = 0;
    cout << "enter a number : ";
    cin >> number;

    if(number ==0){
        cout <<"it is a zero";
    }
    else if(number >0){
        cout <<number << " : it is a positive number ";
    }
    else{
        cout << number << " : it is a negative number ";
    }
    return 0;
}