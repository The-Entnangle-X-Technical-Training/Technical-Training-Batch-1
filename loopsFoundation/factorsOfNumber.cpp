#include<iostream>
using namespace std;
int main()
{
    int number, divisor, factor = 0;
    cout<<"Enter a number : ";
    cin>>number;

    bool isFactor = 1;
    for(divisor=1; divisor<=number; divisor++)
    {
        if(number % divisor == 0)
        {
            isFactor = 1;
            factor++;
            cout<<divisor<<" ";
            
        }
    }
    cout<<endl<<"Total number of factors are : "<<factor;
    return 0;
}