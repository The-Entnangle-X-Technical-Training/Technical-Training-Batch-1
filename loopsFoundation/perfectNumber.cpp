#include<iostream>
using namespace std;
int main()
{
    int number, divisor, sum = 0;
    cout<<"Enter a number : ";
    cin>>number;

    for(divisor=1; divisor<number; divisor++)
    {
        if(number % divisor == 0)
        {
            cout<<divisor<<" ";
            sum = sum + divisor;
        }
    }
    cout<<endl<<"Sum of all divisors is : "<<sum;

    if(sum == number)
    {
        cout<<endl<<"The number is a perfect number.";
    }
    else
    {
        cout<<endl<<"The number is not a perfect number.";
    }
    
    return 0;
}