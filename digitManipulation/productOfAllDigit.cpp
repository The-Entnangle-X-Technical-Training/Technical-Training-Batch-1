#include<iostream>
using namespace std;
int main()
{
    int number, firstDigit, secondDigit, thirdDigit, product;

    cout<<"Enter a three digit number :";
    cin>>number;

    if(number >= 100 && number <= 999)
    {
        firstDigit = number / 100;
        secondDigit = (number / 10) % 10;
        thirdDigit = number % 10;

        product = firstDigit * secondDigit * thirdDigit;

        cout<<"Product of the digits = "<<product;
        
    }
    else
    {
        cout<<"Please enter a three digit number.";
    }
    
    return 0;
}