#include<iostream>
using namespace std;
int main()
{
    int number, firstValue = 0, secondValue = 1, nextValue = 0, sum = 0;
    int nthTerm = 0;
    cout<<"Enter a number : ";
    cin>>number;

    for(int i = 0; i <= number; i++)
    {
        cout<<firstValue<<" ";
        // nthTerm = firstValue;
        int nextValue = firstValue + secondValue;
        firstValue = secondValue;
        secondValue = nextValue;
    }
    cout<<endl<<nthTerm<<endl;
    
    return 0;
}