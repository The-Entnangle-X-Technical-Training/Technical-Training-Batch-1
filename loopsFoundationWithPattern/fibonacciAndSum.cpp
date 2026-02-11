#include<iostream>
using namespace std;
int main()
{
    int number, firstValue = 0, secondValue = 1, nextValue = 0, sum = 0;
    cout<<"Enter a number : ";
    cin>>number;

    for(int i = 0; i < number; i++)
    {
        cout<<firstValue<<" ";
        sum = sum + firstValue;
        int nextValue = firstValue + secondValue;
        firstValue = secondValue;
        secondValue = nextValue;
    }
    cout<<endl<<"Sum = "<<sum;
    return 0;
}