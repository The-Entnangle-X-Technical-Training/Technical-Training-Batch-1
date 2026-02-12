// Problem 22: Prime Number Check
// Write a program that takes a number and checks whether it is prime or not using a loop.
// Hint: Check if the number has any divisor from 2 to N-1

#include <iostream>
using namespace std;

int main(){
    int Number = 0;
    cout <<" Enter a Number : ";
    cin >> Number;

    for(int i = 2; i < Number; i++){
        if(Number % i == 0){
            cout << Number << " is not a prime number.";
            return 0;
        }
    }
    cout << Number << " is a prime number.";
    return 0;
}
