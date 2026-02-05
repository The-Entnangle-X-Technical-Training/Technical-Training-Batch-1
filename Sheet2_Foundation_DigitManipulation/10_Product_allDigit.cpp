//Product of all digit
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int firstDigit = 0;
    int middleDigit = 0;
    int lastDigit = 0;
    int finalOutput = 0;

    cout<< "Enter a three digit number : ";
    cin>> inputNumber;

    lastDigit = inputNumber% 10;
    inputNumber = inputNumber / 10;
    middleDigit = inputNumber % 10;
    firstDigit = inputNumber/ 10;

    finalOutput = lastDigit * middleDigit * firstDigit;

    cout<<"Product : "<<finalOutput;

    return 0;


}