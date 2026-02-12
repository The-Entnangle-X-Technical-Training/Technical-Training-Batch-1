//strong number check 

#include <iostream>
using namespace std;
int main()
{
    int number, originalNumber, digit, factorialSum=0;

    cout<<"Enter a number:";
    cin>>number;

    originalNumber=number;

    while(number>0)
    {
        digit=number%10;
        int factorial=1;

        for(int i=1;i<=digit;i++)
        {
            factorial=factorial*i;
        }

        factorialSum=factorialSum+factorial;
        number=number/10;
    }

    if(originalNumber==factorialSum)
    {
        cout<<"Strong Number";
    }
    else
    {
        cout<<"Not a Strong Number";
    }

    return 0;

}