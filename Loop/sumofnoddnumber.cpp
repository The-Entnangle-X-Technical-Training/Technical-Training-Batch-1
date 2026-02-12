//sum of n odd number

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number :";
    cin>>number;
    int sum =0
;
for(int i=1;i<=number;i++)
{
    int odd=2*i-1;
    sum=sum +odd;
}
cout<<" Sum of first  " <<number<<" odd number is : "<<sum<<endl;
return 0;
}