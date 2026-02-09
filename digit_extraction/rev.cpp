// reversing the order of the number 
#include <iostream>
using namespace std;
int main() {
 int a,b,x,z,p,sum;
 cout<<"enter the three digit number:"<<endl;
 
 cin>>a;
 b=a%10;
x=a/10;
z=x%10;
p=a/100;
 
 cout<<" last digit  :"<<b<<endl;
 cout<<"middle digit  :"<<z<<endl;
 cout<<"first digit :"<<p<<endl;
 sum=b*100+z*10+p;
 cout<<"the number formed after reversing  :"<<sum<<endl;
    return 0;
}
