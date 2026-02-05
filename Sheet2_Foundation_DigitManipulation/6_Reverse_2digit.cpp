//Reverse a 2 digit number
#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;
    int firstDigit = 0;
    int secondDigit = 0;
    int finalOutput = 0;

    cout<<"Enter a two digit number: ";
    cin>>inputNumber;

    secondDigit = inputNumber % 10;
    firstDigit = inputNumber / 10;

    finalOutput = secondDigit*10 + firstDigit*1;

    cout<<"Reversed Number: "<<finalOutput;

    return 0;


}