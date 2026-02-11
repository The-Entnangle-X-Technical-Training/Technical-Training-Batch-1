#include<iostream>
using namespace std;
int main()
{
    int number, multiple, count = 0;
    cout<<"Enter a number : ";
    cin>>number;

    cout<<"Enter the multiple : ";
    cin>>multiple;

    for(int i = 1; i <= number; i++)
    {
        if(i % multiple == 0)
        {
            cout<<i<<" ";
            count = count + 1;
        }
    }
    cout<<endl<<"Total numtiples of "<<multiple<<" from 1 to "<<number<<" = "<<count;
    
    return 0;
}