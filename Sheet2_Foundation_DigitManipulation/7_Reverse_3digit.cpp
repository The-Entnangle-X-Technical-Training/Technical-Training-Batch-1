//Reverse a 3 digit number
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int firstDigit = 0;
    int middleDigit = 0;
    int lastDigit = 0;
    int finalOutput = 0;

    cout<< "Enter a three digit number to reverse: ";
    cin>> inputNumber;

    lastDigit = inputNumber%10;
    inputNumber = inputNumber / 10;
    middleDigit = inputNumber %10;
    firstDigit = inputNumber/10;

    finalOutput = lastDigit*100 + middleDigit*10 + firstDigit*1;

    cout<<"Reversed Number : "<<finalOutput;

    return 0;


}