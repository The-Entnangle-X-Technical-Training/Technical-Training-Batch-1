//8: Swap First and Last Digit of 3-Digit Number

#include<iostream>
using namespace std;

int main(){

    int number;
    int lastDigit;
    int middleDigit;
    int firstDigit;
    int reverse;

    cout<<"number=";
    cin>>number;

    number/100;
    firstDigit=number/100;

    number%10;
    lastDigit=number%10;

    number/10;
    number%10;
    number=number/10;
    number=number%10;
    middleDigit=number%10;

    cout<<"reverse:"<<lastDigit<<middleDigit<<firstDigit;

}