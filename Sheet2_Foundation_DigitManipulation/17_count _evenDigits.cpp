//Count Even Digits
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int firstDigit = 0;
    int secondDigit = 0;
    int thirdDigit = 0;
    int forthDigit = 0;
    int count = 0;

    cout<< "Enter a 4 digit number : ";
    cin>> inputNumber;

    forthDigit = inputNumber% 10;
    inputNumber = inputNumber / 10;
    thirdDigit = inputNumber % 10;
    inputNumber = inputNumber / 10;
    secondDigit = inputNumber % 10;
    firstDigit = inputNumber/ 10; 

   

    if(firstDigit % 2 == 0){
        count++;
    }
    if(secondDigit % 2 == 0){
        count++;
    }if(thirdDigit % 2 == 0){
        count++;
    }if(forthDigit % 2 == 0){
        count++;
    }

    cout<<"Number of even digits : "<<count;

    return 0;

}