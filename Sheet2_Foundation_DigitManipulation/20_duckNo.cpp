//Write a program that takes a 4-digit number ABCD and checks if it contains the digit 0 anywhere except
//the first position. Example: 4012 → Duck Number, 0123 → Not Duck, 1234 → Not Duck. Display
//"Duck Number" or "Not Duck Numbe

#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int firstDigit = 0;
    int secondDigit = 0;
    int thirdDigit = 0;
    int forthDigit = 0;

    cout<< "Enter a 4 digit number : ";
    cin>> inputNumber;

    forthDigit = inputNumber% 10;
    inputNumber = inputNumber / 10;
    thirdDigit = inputNumber % 10;
    inputNumber = inputNumber / 10;
    secondDigit = inputNumber % 10;
    firstDigit = inputNumber / 10;

    if((secondDigit == 0 || thirdDigit == 0 || forthDigit ==0)&& firstDigit != 0){
        cout<<"Duck Number!QUACK!";

    }
    
    else{
        cout<<"Not a Duck Number!!";
    }


    return 0;

}