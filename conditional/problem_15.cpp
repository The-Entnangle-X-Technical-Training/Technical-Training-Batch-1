// Problem 15: Check if Number is Single Digit, Double Digit, or More
// Write a program that takes a number and checks if it is a single digit (0-9), double digit (10-99), or more
// than double digit. Display the category.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout << "enter a number : ";
    cin >> number;
    if(number >= 0 && number <=9){
        cout <<" it is a single digit (0-9) ";
    }else if(number >= 10 && number <=99){
        cout <<" double digit (10-99) ";
    }else{
        cout <<"more than double digit";
    }
    return 0;
}