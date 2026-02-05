//Sum of digits
#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;
    int firstDigit = 0;
    int middleDigit = 0;
    int lastDigit = 0;
    int sum = 0;

    cout<<"Enter a 3 digit number: ";
    cin>>inputNumber;

    lastDigit = inputNumber % 10;
    inputNumber = inputNumber / 10;

    middleDigit = inputNumber % 10;
    inputNumber = inputNumber / 10;

    firstDigit = inputNumber;

    sum = firstDigit + middleDigit + lastDigit;

    cout<<" The sum of digits is: "<< sum;

    return 0;


}