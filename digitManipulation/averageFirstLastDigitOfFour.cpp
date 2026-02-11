#include<iostream>
using namespace std;
int main()
{
    int number, firstDigit, lastDigit, average;
    cout<<"Enter a four digit number :";
    cin>>number;

    if(number >= 1000 && number <= 9999)
    {
        firstDigit = number / 1000;
        lastDigit = number % 10;

        average = (firstDigit + lastDigit) / 2;

        cout<<"Average of first and last digits = "<<average;
        
    }
    else
    {
        cout<<"Please enter a four digit number.";
    }
}