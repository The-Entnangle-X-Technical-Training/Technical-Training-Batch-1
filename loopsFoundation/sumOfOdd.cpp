#include<iostream>
using namespace std;
int main()
{
    int number, sum;
    cout<<"Enter a number : ";
    cin>>number;

    for(int i = 1; i <= number; i++)
    {
        if(i % 2 != 0)
        {
            cout<<i<<" ";
        }
        sum = i*i;
    }
    // sum = number * number;
    cout<<endl<<"Sum of "<<number<<" odd numbers = "<<sum;
}