// Problem 17: Palindrome Number Check
// Write a program that checks if a number is a palindrome (reads same forwards and backwards).
// Example: 121, 12321, 1331 are palindromes

#include <iostream>
using namespace std;

int main(){
    int Number = 0;
    int lastDigit = 0;
    int Reverse = 0;
    cout <<" Enter a Number : ";
    cin >> Number;
    int temp = Number; 
    while(temp > 0){
        lastDigit = temp % 10;
        Reverse = (Reverse*10) + lastDigit ;
        temp /= 10;
    }
    if(Number == Reverse){
        cout << "the number is a palindrome";
    }else{
        cout << "the number is not a palindrome";
    }
    return 0;
}