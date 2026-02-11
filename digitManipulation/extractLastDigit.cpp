#include<iostream>
using namespace std;
int main()
{
    int number, lastDigit;
    cout<<"Enter a number : ";
    cin>>number;

    lastDigit = number % 10;
    cout<<"Last digit of the number = "<<lastDigit;

    return 0;
}