#include<iostream>
using namespace std;
int main()
{
    int number, sum;
    cout<<"Enter a number : ";
    cin>>number;

    for(int i = 1; i <= number; i++)
    
    {
        cout<<i<<" ";
        sum = (i*(i+1))/2;
        
    }
    cout<<endl<<"Sum of "<<number<<" natural numbers is : "<<sum;
    
    return 0;
}