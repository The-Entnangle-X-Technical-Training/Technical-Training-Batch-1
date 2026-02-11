#include<iostream>
using namespace std;
int main()
{
    int number, firstDigit, lastDigit, newNumber;
    cout<<"Enter a three digit number :";
    cin>>number;

    if(number >= 100 && number <= 999)
    {
        firstDigit = number / 100;
        lastDigit = number % 10;

        newNumber = (lastDigit * 100) + (number % 100 / 10 * 10) + firstDigit;

        cout<<"Number after swapping the first and last digits = "<<newNumber;
        
    }
    else
    {
        cout<<"Please enter a three digit number.";
    }
}