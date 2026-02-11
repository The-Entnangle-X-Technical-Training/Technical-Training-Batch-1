#include<iostream>
using namespace std;
int main()
{
    int number, sum = 0;
    cout<<"Enter a number : ";
    cin>>number;

    for(int i = 1; i <= number; i++)
    {
        sum = i*(i+1);
    }
    // sum = number * (number + 1);
    cout<<"Sum of "<<number<<" even numbers = "<<sum<<endl;

    return 0;
}