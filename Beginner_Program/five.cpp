//swaping
#include<iostream>
using namespace std;
int main(){
    int a , b , temp;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;

    cout<<"before swapping : a ="<< a<<endl;
    cout<<"b ="<< b<<endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"after swapping : a ="<< a<<endl;
    cout<<"b ="<< b<<endl;

    return 0;
}