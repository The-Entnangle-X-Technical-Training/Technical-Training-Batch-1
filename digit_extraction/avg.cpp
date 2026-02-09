// avg of first and last digit
#include <iostream>
using namespace std;
int main() {
 int a,b,x,z,p,sum,avg;
 cout<<"enter the three digit number:"<<endl;
 
 cin>>a;
 b=a%10;
x=a/10;
z=x%10;
p=a/100;
 
 cout<<" last digit  :"<<b<<endl;
 cout<<"middle digit  :"<<z<<endl;
 cout<<"first digit :"<<p<<endl;
 sum=b+p;
 avg=sum/2;
 cout<<"the sum of first and last digit   :"<<sum<<endl;
 cout<<"the avg of first and last digit: "<<avg<<endl;
    return 0;
}
