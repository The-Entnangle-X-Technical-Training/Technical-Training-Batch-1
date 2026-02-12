//perfect number checker

#include<iostream>
using namespace std;
int main()
{
    int number, sum=0,original_number;
    cout<<"Enter a number: ";
    cin>>number;

    original_number=number;

    for(int i=1;i<number;i++)
    {
        if(number%i==0)
         sum+=i;
    }

    if(original_number==sum)
    {
        cout<<"The number is perfect Number"<<endl;
    }
    else
    {
        cout<<"The number is not perfect number"<<endl;
    }
    return 0;
    }