#include<iostream>
using namespace std;
int main()
{
    int number, digit, reverse = 0;
    cout<<"Enter a number : ";
    cin>>number;

    for(number; number>0; number = number / 10)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
    }
    cout<<"Reverse of the number = "<<reverse;

    return 0;
}