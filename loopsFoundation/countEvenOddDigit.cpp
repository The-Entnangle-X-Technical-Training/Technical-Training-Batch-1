#include<iostream>
using namespace std;
int main()
{
    int number, digit, evenCount = 0, oddCount = 0;
    cout<<"Enter a number : ";
    cin>>number;

    for(number; number > 0; number = number / 10)
    {
        digit = number % 10;
        if(digit % 2 == 0)
        {
            evenCount = evenCount + 1;
        }
        else
        {
            oddCount = oddCount + 1;
        }
    }
    cout<<"Total even digits in the number = "<<evenCount<<endl;
    cout<<"Total odd digits in the number = "<<oddCount;
}