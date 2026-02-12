// Problem 26: Sum of Divisors
// Write a program that takes a number N and calculates the sum of all its divisors (excluding N itself).
// Example: Divisors of 12 are 1, 2, 3, 4, 6, so sum = 16

#include <iostream>
using namespace std;

int main(){
    int Number = 0;
    int Sum = 0;
    cout <<" Enter a Number : ";
    cin >> Number;

    for(int i = 1 ; i < Number ; i++){
        if(Number % i == 0){
            Sum += i;
        }
    }
    cout << "Divisors of " << Number << " Sum are : "<< Sum;
    return 0;
}