// Problem 20: Strong Number Check
// Write a program that checks if a number is a strong number (sum of factorial of digits equals the number).
// Example: 145 = 1! + 4! + 5! = 1 + 24 + 120 = 145

#include <iostream>
using namespace std;

int factorial(int digit){
    int factor= 1;
    for(int i = 1 ; i<= digit;i++){
        factor *= i;
    }
    return factor;
}
int main(){
    int Number = 0;
    int Sum = 0;
    int temp = 0;
    int digit = 0;
    int factoria = 1;
    cout <<" Enter a Number : ";
    cin >> Number;
    
    temp = Number;
    while( temp >0){
        digit = temp%10;
        factoria = factorial(digit);
        Sum += factoria;
        temp /=10;
    }
    if(Number == Sum){
        cout << " Number is a strong number ";
    }else{
        cout << " Number is not a strong number ";
    }
    return 0;
}