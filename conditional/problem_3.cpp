// Problem 3: Greater of Two Numbers
// Write a program that takes two numbers as input and displays which one is greater, or if they are equal.

#include <iostream>
using namespace std;
 
int main(){

    int firstNumber = 0;
    int secondNumber = 0;
    cout <<"enter the first number : ";
    cin >> firstNumber;
    cout << "enter the second Number : ";
    cin >> secondNumber;

    if(firstNumber > secondNumber){
        cout << " first number is greater";
    }
    else if(firstNumber < secondNumber){
        cout << "second number is greater";
    }
    else{
        cout << "they are equal ";
    }
    return 0;
}