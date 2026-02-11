#include<iostream>
using namespace std;
int main()
{
    int number, firstDigit, secondDigit, thirdDigit, sum;

    cout<<"Enter a three digit number :";
    cin>>number;

    if(number >= 100 && number <= 999)
    {
        firstDigit = number / 100;
        secondDigit = (number / 10) % 10;
        thirdDigit = number % 10;

        sum = firstDigit + secondDigit + thirdDigit;

        cout<<"Sum of the digits = "<<sum;
        
    }
    else
    {
        cout<<"Please enter a three digit number.";
    }
    
    return 0;
}