//palindrome number checker
#include<iostream>
using namespace std;
int main()
{
    int number,reversed=0,digit;
    cout<<"Enter a number:";
    cin>>number;

    int originalnumber=number;

    while(number>0)
    {
        digit=number%10;
        reversed=reversed*10+digit;
        number=number/10;
    }

    cout<<"Reversded number is:"<<reversed<<endl;

    if(originalnumber==reversed)
    {
        cout<<"Number is palindrome"<<endl;
    }

    else
    {
        cout<<"Number is not palindrome"<<endl;

    }

    return 0;
    
    }