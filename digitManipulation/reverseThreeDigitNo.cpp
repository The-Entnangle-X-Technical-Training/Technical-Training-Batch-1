#include<iostream>
using namespace std;
int main()
{
    int number, digitOne, digitTwo, digitThree, reverse;
    cout<<"Enter a three digit number :";
    cin>>number;

    if(number >= 100 && number <= 999)
    {
        digitOne = number / 100;
        digitTwo = (number / 10) % 10;
        digitThree = number % 10;

        reverse = (digitThree * 100) + (digitTwo * 10) + digitOne;

        cout<<"Reverse of the number = "<<reverse;
        
    }
    else
    {
        cout<<"Please enter a three digit number.";
    }
}