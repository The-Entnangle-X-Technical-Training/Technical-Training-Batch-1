// Problem 11: Print Multiplication Table of N
// Write a program that takes a number N and prints its multiplication table from N×1 to N×10.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=10 ; i++){
        cout <<number << " * "<< i << " = "<<number*i <<endl;
    }
    return 0;
}