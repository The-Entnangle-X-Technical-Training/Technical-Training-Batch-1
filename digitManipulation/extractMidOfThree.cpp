#include<iostream>
using namespace std;
int main()
{
    int number, midDigit;

    cout<<"Enter a three digit number :";
    cin>>number;

    if(number >= 100 && number <= 999)
    {
        midDigit = (number / 10) % 10;
        cout<<"Middle digit of the number = "<<midDigit;
        
    }
    else
    {
        cout<<"Please enter a three digit number.";
    }
    
    return 0;
}