// Problem 25: Print All Factors of a Number
// Write a program that takes a number as input and prints all its factors using a loop.

#include <iostream>
using namespace std;

int main(){
    int Number = 0;
    cout <<" Enter a Number : ";
    cin >> Number;

    for(int i = 1 ; i <= Number ; i++){
        if(Number % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}