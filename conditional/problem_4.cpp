// Problem 4: Divisibility Check
// Write a program that takes two numbers (dividend and divisor) and checks if the dividend is divisible by
// the divisor. Display "Divisible" or "Not Divisible".

#include <iostream>
using namespace std;

int main(){
    int dividend =0;
    int divisor =0;
    cout << "enter the dividend number : ";
    cin >> dividend;
    cout <<"enter the divisor number : ";
    cin >> divisor;
    if(dividend%divisor==0){
        cout <<" it is Divisible ";
    }
    else{
        cout << " it is Not Divisible";
    }
    return 0;
}