//Write a program that takes a 3-digit number, calculates the sum of its digits, and checks if the number is
//divisible by this sum. Example: 153 → 1+5+3=9, 153÷9=17 → Harshad Number. Display "Harshad
//Number" or "Not Harshad Number".

#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int firstDigit = 0;
    int secondDigit = 0;
    int thirdDigit = 0;
    int sum = 0;
    int originalNumber = 0;

    cout<< "Enter a 3 digit number : ";
    cin>> inputNumber;

    originalNumber = inputNumber;

    thirdDigit = inputNumber % 10;
    inputNumber = inputNumber / 10;
    secondDigit = inputNumber % 10;
    firstDigit = inputNumber/ 10; 

    sum = firstDigit + secondDigit + thirdDigit;


   
    if(originalNumber % sum  == 0  ){
        cout<<"Harshad Number";
    }
    else{
        cout<<"Not a Harshad number";
    }

    return 0;

}