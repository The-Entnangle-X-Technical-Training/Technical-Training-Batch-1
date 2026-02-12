//Extract First Digit of 3-Digit Number

#include<iostream>
using namespace std;

int main(){

    int number;
    int firstDigit;

    cout<<"number=";
    cin>>number;

    number/100;
    firstDigit=number/100;
    cout<<"first digit:"<<firstDigit;

}


