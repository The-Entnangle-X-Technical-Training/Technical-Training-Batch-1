//displaying the first digit of a three digit number after extraction

#include <iostream>

using namespace std;
int main() {
 int a,b,z;
 cout<<"enter the three digit number:"<<endl;
 
 cin>>a;
 b=a/100;
 z=b%10;
 cout<<"first digit after extraction is  :"<<b<<endl;
 
    return 0;
}