//Sum of divisor including N 

#include<iostream>
using namespace std;
int main()
{
    int number, sum=0;
    cout<<"Enter a number: ";
    cin>>number;

    for(int i=1;i<number;i++)
    {
        if(number%i==0)
         sum+=i;
    }

    cout<<"The Sum of divisor are: "<<sum;
    
return 0;
}