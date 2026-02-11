#include<iostream>
using namespace std;
int main()
{
    int numberOne = 0, numberTwo = 0, GCD = 1;
    cout<<"Enter first number : ";
    cin>>numberOne;

    cout<<"Enter second number : ";
    cin>>numberTwo;

    for(int i = 1; i < numberOne && i < numberTwo; i++)
    {
        if(numberOne % i == 0 && numberTwo % i == 0)
        {
            GCD = i;
        }
    }
    cout<<"Greatest Common Divisor = "<<GCD;
    return 0;
}