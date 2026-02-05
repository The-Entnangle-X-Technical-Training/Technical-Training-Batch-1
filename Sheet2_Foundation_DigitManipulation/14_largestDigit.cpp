//largest digit in a 3 digit number
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int firstDigit = 0;
    int middleDigit = 0;
    int lastDigit = 0;

    cout<< "Enter a three digit number : ";
    cin>> inputNumber;

    lastDigit = inputNumber% 10;
    inputNumber = inputNumber / 10;
    middleDigit = inputNumber % 10;
    firstDigit = inputNumber/ 10;

    if(firstDigit > lastDigit && firstDigit > middleDigit){
        cout<<"FirstDigit "<<firstDigit<<" is the greatest.";
    }
    else if(middleDigit > firstDigit && middleDigit > lastDigit){
        cout<<"MiddleDigit "<<middleDigit<<" is the greatest.";
    }
    else{
        cout<<"LastDigit "<<lastDigit<<" is the greatest.";
    }

    return 0;


}