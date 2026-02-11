#include<iostream>
using namespace std;
int main()
{
    int number, divisor, sum = 0;
    cout<<"Enter a number : ";
    cin>>number;

    for(divisor=1; divisor<=number; divisor++)
    {
        if(number % divisor == 0)
        {
            sum = sum + divisor;
        }
    }
    cout<<"Sum of all divisors is : "<<sum;
    return 0;
}