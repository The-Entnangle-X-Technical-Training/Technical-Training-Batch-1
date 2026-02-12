// Problem 15: Reverse a Number using Loop
// Write a program that takes a number and prints it in reverse using a loop.
// Hint: Extract digits one by one and build reversed number

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int Reverse = 0;
    int lastDigit = 0;

    cout <<" Enter a number : ";
    cin >> number;
    while(number > 0){
        lastDigit = number % 10;
        Reverse = (Reverse*10) + lastDigit ;
        number /= 10;
    }
    cout << "the reverse of number is : "<<Reverse;
    return 0;
}