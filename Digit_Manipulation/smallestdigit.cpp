//find smallest digit in a number

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

    if(firstDigit<secondDigit && firstDigit<thirdDigit && firstDigit<fourthDigit)
    {
        cout<<"The Smallest Digit is "<<firstDigit<<endl;
    }
    else if(secondDigit<firstDigit && secondDigit<thirdDigit && secondDigit<fourthDigit)
    {
        cout<<"The Smallest Digit is "<<secondDigit<<endl;
    }
   else if(thirdDigit<firstDigit && thirdDigit<secondDigit && thirdDigit<fourthDigit)
   {
    cout<<"The Smallest Digit is "<<thirdDigit<<endl;

   }
   else
   {
    cout<<"The Smallest Digit is "<<fourthDigit<<endl;

   }
    return 0;

}