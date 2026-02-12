//Prime number checker

#include<iostream>
using namespace std;
int main()
{
    int number,i=2;
    cout<<"Enter a number:";
    cin>>number;

    while(i<number)
    {
        if(number%i==0)
        {
       cout<<"The number is not a prime number "<<endl;
       break;
        }
        else
        {
            cout<<"The number is a prime number"<<endl;
            break;
        }
        
        return 0;
}
}