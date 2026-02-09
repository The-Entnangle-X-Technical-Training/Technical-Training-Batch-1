// product of all three numbers
#include <iostream>
using namespace std;
int main() {
 int a,b,x,z,p,prd;
 cout<<"enter the three digit number:"<<endl;
 
 cin>>a;
 b=a%10;
x=a/10;
z=x%10;
p=a/100;
 
 cout<<" last digit  :"<<b<<endl;
 cout<<"middle digit  :"<<z<<endl;
 cout<<"first digit :"<<p<<endl;
 prd=b*z*p;
 cout<<"the product of all three digit   :"<<prd<<endl;
 
    return 0;
}
