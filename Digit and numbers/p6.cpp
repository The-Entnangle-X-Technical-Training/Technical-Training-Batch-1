//Reverse a 2-Digit Number

#include<iostream>
using namespace std;

int main(){

    int number;
    int lastDigit;
    int firstDigit;
    int reverse;

    cout<<"number=";
    cin>>number;

    number%10;
    lastDigit=number%10;
    number/10;
    firstDigit=number/10;

    cout<<"reverse:"<<lastDigit<<firstDigit;
    

}