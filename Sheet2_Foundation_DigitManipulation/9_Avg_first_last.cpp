//Average of first and last digit
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int firstDigit = 0;
    int lastDigit = 0;
    int average = 0;

    cout<< "Enter a three digit number : ";
    cin>> inputNumber;

    lastDigit = inputNumber%10;
    firstDigit = inputNumber/100;

    average = (lastDigit + firstDigit)/2;

    cout<<"Average : "<<average;

    return 0;


}