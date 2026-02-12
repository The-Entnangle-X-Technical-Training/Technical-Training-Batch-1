//9: Average of First and Last Digit

#include<iostream>
using namespace std;

int main(){

    int number; //4digit
    int firstDigit;
    int lastDigit;
    double average;

    cout<<"number=";
    cin>>number;

    number/1000;
    firstDigit=number/1000;

    number%10;
    lastDigit=number%10;

    average=(firstDigit+lastDigit)/2;
    cout<<"average="<<average;


}