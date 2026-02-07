// Problem 2: Even or Odd
// Write a program that takes a number as input and displays whether it is even or odd.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout << "Enter a number : ";
    cin >> number;
    if(number%2 ==0){
        cout << " it is even number ";
    }
    else{
        cout << "it is a odd number";
    }
    return 0;
}