// Number divisible by 3
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int sumOfDigits = 0;
    int firstDigit = 0;
    int middleDigit = 0;
    int lastDigit = 0;

    cout<< "Enter a number : ";
    cin>> inputNumber;

    if(!(inputNumber>= -9 && inputNumber<= 9)){
        sumOfDigits = inputNumber;
    }
    else{
       lastDigit = inputNumber% 10;
       inputNumber = inputNumber / 10;
       middleDigit = inputNumber % 10;
       firstDigit = inputNumber/ 10; 

       sumOfDigits = firstDigit + middleDigit + lastDigit;
    }

    if(sumOfDigits % 3 == 0){
        cout<<" The number is divisible by 3.";
    }
    else{
        cout<<"The number is not divisible by 3.";
    }

    return 0;

}