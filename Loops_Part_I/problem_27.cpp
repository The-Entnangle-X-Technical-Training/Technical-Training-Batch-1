// Problem 27: Perfect Number Check
// Write a program that checks if a number is a perfect number (sum of its divisors excluding itself equals
// the number).
// Example: 6 = 1 + 2 + 3, 28 = 1 + 2 + 4 + 7 + 14

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
    if(Sum == Number){
        cout << "The number is a Perfect Number";
    }
    else{
        cout << "The number is not a Perfect Number";
    }
    return 0;
}