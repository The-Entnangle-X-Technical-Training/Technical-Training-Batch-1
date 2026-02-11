#include<iostream>
using namespace std;
int main()
{
    int number, firstValue = 0, secondValue = 1, nextValue = 0;
    cout<<"Enter a number : ";
    cin>>number;

    for(int i = 0; i < number; i++)
    {
        cout<<firstValue<<" ";
        int nextValue = firstValue + secondValue;
        firstValue = secondValue;
        secondValue = nextValue;
    }
    return 0;
}