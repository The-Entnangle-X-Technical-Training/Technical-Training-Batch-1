//even digit in a number

#include<iostream>
using namespace std;
int main()
{
        int number,firstDigit,secondDigit,thirdDigit,fourthDigit;
        cout<<"Enter a number:";
        cin>>number;
        firstDigit=number/1000;
        secondDigit=(number%1000)/100;
        thirdDigit=((number%1000)%100)/10;
        fourthDigit=number%10;
        if(firstDigit%2==0){
            cout<<"The Even Digit is "<<firstDigit<<endl;
        }
        else if(secondDigit%2==0){
            cout<<"The Even Digit is "<<secondDigit<<endl;
        }
        else if(thirdDigit%2==0){
            cout<<"The Even Digit is "<<thirdDigit<<endl;
        }
        else if(fourthDigit%2==0){
            cout<<"The Even Digit is "<<fourthDigit<<endl;
        }
        else{
            cout<<"There is no even digit in the number"<<endl;
        }
        return 0;
}