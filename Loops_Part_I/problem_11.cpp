// Problem 11: Power Calculator
// Write a program that takes two numbers base and exponent, and calculates base^exponent using a loop
// (without using pow function).

#include <iostream>
using namespace std;

int main(){
    int base = 0;
    int exponent = 0;
    int ans = 1;
    cout <<" Enter a base value : ";
    cin >> base;
    cout << " Enter the exponent value : ";
    cin >> exponent;
    for(int i = 1 ; i <=exponent ; i++){
        ans  = ans * base ;
    }
    cout << "the base^exponent is : "<<ans;
    return 0;   
}