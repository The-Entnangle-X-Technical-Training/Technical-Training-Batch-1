#include<iostream>
using namespace std;
int main()
{
    int number, lastDigit;
    cout<<"Enter a number : ";
    cin>>number;

    lastDigit = number % 10;

    if(lastDigit % 2 == 0)
        {
            cout<<"The last digit of the number is even.";
        }
    else
        {
            cout<<"The last digit of the number is odd.";
        }
    return 0;
}