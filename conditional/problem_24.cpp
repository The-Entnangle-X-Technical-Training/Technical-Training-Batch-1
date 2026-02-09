// Problem 24: Divisibility by 2, 3, 5, or None
// Write a program that takes a number and checks if it is divisible by 2, 3, 5, or none of these. Display
// appropriate message for each case.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout << "enter a number : ";
    cin >> number;
    if(number%2==0 && number%3==0 && number%5==0){
        cout <<number <<" is divisible by 2, 3, and 5 ";
    }else if(number%2==0 && number%3==0){
        cout <<number <<" is divisible by 2 and 3 ";
    }else if(number%2==0 && number%5==0){
        cout <<number <<" is divisible by 2 and 5 ";
    }else if(number%3==0 && number%5==0){
        cout <<number <<" is divisible by 3 and 5 ";
    }else if(number%2==0){
        cout <<number <<" is divisible by 2 ";
    }else if(number%3==0){
        cout <<number <<" is divisible by 3 ";
    }else if(number%5==0){
        cout <<number <<" is divisible by 5 ";
    }else{
        cout <<number <<" is not divisible by 2, 3, or 5 ";
    }
    return 0;
}