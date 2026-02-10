// Program 18: Check if Digits are in Ascending Order
// Write a program that takes a 3-digit number as input and checks if its digits are in strictly ascending order
// (e.g., 123 is yes, 132 is no).

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int FirstDigit = 0;
    int SecondDigit = 0;
    int ThirdDigit = 0;
    cout <<" Enter the 3 -digit number : ";
    cin >> number ;
    FirstDigit = number /100;
    SecondDigit = (number/10)%10;
    ThirdDigit = number % 10;
    if(FirstDigit <= SecondDigit <= ThirdDigit){
        cout <<"its digits are in strictly ascending order ";
    }else{
        cout <<" its Digit are not in strictly ascending order ";
    }
    return 0;
}