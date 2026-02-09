// extracting three digit and sum of them 
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
 sum=p+z+b;
 cout<<"the sum of all extracted digit is :"<<sum<<endl;
    return 0;
}
