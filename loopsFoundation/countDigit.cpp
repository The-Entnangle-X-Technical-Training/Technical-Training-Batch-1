#include<iostream>
using namespace std;
int main()
{
    int number, digit, count = 0;
    cout<<"Enter a number : ";
    cin>>number;

    for(number; number > 0; number = number / 10)
    {
        digit = number % 10;
        count = count + 1;
    }
    cout<<"Total digits in the number = "<<count;
}