// Problem 28: Check if Number is Divisible by Both 3 and 5
// Write a program that takes a number and checks: if divisible by both 3 and 5 display "Divisible by Both",
// if by 3 only "Divisible by 3", if by 5 only "Divisible by 5", else "Not Divisible by 3 or 5"

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout << "enter a number : ";
    cin >> number;
    if(number%3==0 && number%5==0){
        cout <<number <<" is Divisible by Both 3 and 5 ";
    }else if(number%3==0){
        cout <<number <<" is Divisible by 3 only ";
    }else if(number%5==0){
        cout <<number <<" is Divisible by 5 only ";
    }else{
        cout <<number <<" is Not Divisible by 3 or 5 ";
    }
    return 0;
}