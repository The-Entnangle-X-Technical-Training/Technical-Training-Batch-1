// Problem 2: Print Numbers 1 to N
// Write a program that takes a number N as input and prints all numbers from 1 to N.


#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
        cout << i << endl;
    }
    return 0;
}