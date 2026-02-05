//Digits in ascending order
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int firstDigit = 0;
    int middleDigit = 0;
    int lastDigit = 0;

    cout<< "Enter a 3 digit number : ";
    cin>> inputNumber;

    lastDigit = inputNumber% 10;
    inputNumber = inputNumber / 10;
    middleDigit = inputNumber % 10;
    firstDigit = inputNumber/ 10; 


    if(lastDigit >middleDigit && middleDigit > firstDigit){
        cout<<" It is in Ascending order.";
    }
    else{
        cout<<"Not in ascending order.";
    }

    return 0;

}