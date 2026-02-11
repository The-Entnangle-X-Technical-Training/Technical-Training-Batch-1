#include<iostream>
using namespace std;
int main()
{
    int number, firstDigit;

    cout<<"Enter a three digit number :";
    cin>>number;

    if(number >= 100 && number <= 999)
    {
        firstDigit = number / 100;
        cout<<"First digit of the number = "<<firstDigit;
        
    }
    else
    {
        cout<<"Please enter a three digit number.";
    }
    
    return 0;
}