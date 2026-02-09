// Problem 30: Ascending or Descending Order Checker
// Write a program that takes three numbers and checks if they are in strictly ascending order, strictly
// descending order, or neither.

#include <iostream>
using namespace std;

int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    cout << "enter the first number : ";
    cin >> num1;
    cout << "enter the second number : ";
    cin >> num2;
    cout << "enter the third number : ";
    cin >> num3;
    if(num1 <= num2 && num2 <= num3){
        cout <<"the numbers are in strictly ascending order ";
    }else if(num1 >= num2 && num2 >= num3){
        cout <<"the numbers are in strictly descending order ";
    }else{
        cout <<"the numbers are neither in ascending nor descending order ";
    }
    return 0;
}