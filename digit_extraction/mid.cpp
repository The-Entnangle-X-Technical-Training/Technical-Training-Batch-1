//displaying the middle value 

#include <iostream>

using namespace std;
int main() {
 int a,b,x;
 cout<<"enter the three digit number:"<<endl;
 
 cin>>a;
 b=a/10;
 x=b%10;
 cout<<" digit after extraction is  :"<<b<<endl;
  cout<<"middle digit after extraction is  :"<<x<<endl;
 
    return 0;
}