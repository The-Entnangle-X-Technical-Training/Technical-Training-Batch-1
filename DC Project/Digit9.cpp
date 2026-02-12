//average of first and last digit 

#include<iostream>
using namespace std;
int main(){

    int numberOne, lastDigit=0, firstDigit=0, average=0;

    cout<<"Enter a number ";
    cin>>numberOne;

    lastDigit = numberOne % 10;
    firstDigit = numberOne / 1000;

    average = (firstDigit + lastDigit) / 2 ;
    
    cout<<"Average of firstDigit and lastDigit: "<<average;

    return 0;
}