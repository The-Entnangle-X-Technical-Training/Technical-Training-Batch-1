//Swap first and alst digit of a 3 digit number
//Reverse a 3 digit number
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

    lastDigit = inputNumber%10;
    inputNumber = inputNumber / 10;
    middleDigit = inputNumber %10;
    firstDigit = inputNumber/10;

    firstDigit = firstDigit + lastDigit;
    lastDigit = firstDigit - lastDigit;
    firstDigit = firstDigit - lastDigit;

    finalOutput = firstDigit*100 + middleDigit*10 + lastDigit*1;

    cout<<"Swapped Number : "<<finalOutput;

    return 0;


}