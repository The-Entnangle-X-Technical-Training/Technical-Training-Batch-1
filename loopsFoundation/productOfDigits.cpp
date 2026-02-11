#include<iostream>
using namespace std;
int main()
{
    int number, digit, product = 1;
    cout<<"Enter a number : ";
    cin>>number;

    for(number; number>0; number = number / 10)
    {
        digit = number % 10;
        product = product * digit;
    }
    cout<<"Product of the digits = "<<product;

    return 0;
}