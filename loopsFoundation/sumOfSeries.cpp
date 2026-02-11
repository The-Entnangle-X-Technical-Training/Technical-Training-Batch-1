#include<iostream>
using namespace std;
int main()
{
    int number, sum = 0;
    cout<<"Enter a number : ";
    cin>>number;

    for(int i=1; i<=number; i++)
    {
        cout<<i<<" ";
        sum = sum + (i*i);
    }
    cout<<endl<<"Sum of series = "<<sum;
}