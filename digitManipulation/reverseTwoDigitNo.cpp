#include<iostream>
using namespace std;
int main()
{
    int number, digitOne, digitTwo, reverse;
    cout<<"Enter a two digit number :";
    cin>>number;

    if(number >= 10 && number <= 99)
    {
        digitOne = number / 10;
        digitTwo = number % 10;

        reverse = (digitTwo * 10) + digitOne;

        cout<<"Reverse of the number = "<<reverse;
        
    }
    else
    {
        cout<<"Please enter a two digit number.";
    }
}