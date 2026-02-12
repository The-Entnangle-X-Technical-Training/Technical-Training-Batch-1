//swapping without using third variable :
#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    cout<<"before swaping : a="<<a<<",b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swapping : a="<<a<<",b="<<b;
    return 0;
}