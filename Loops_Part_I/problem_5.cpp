// Problem 5: Table Generator
// Write a program that takes a number N and prints its multiplication table from 1 to 10.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=10 ; i++){
        cout << number << " x " << i << " = " << number*i << endl;
    }
    return 0;
}