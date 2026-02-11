#include<iostream>
using namespace std;
int main()
{
    int a,d,N, AP, sum = 0;
    int nthTerm = 0;
    cout<<"Enter a number : ";
    cin>>a;

    cout<<"Enter a difference : ";
    cin>>d;

    cout<<"Enter a nth : ";
    cin>>N;

    for(int i = 0; i < N; i++)
    {
        AP =  a + i*d;
        cout<<AP<<" ";
        sum = sum + AP;
    }
    
    cout<<endl<<sum;
    return 0;
}