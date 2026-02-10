#include<iostream>
using namespace std;

int main(){

    int a, b;

    cout<<"Enter the a = "<<endl;
    cin>>a;
    cout<<"Enter the b = "<<endl;
    cin>>b;

    a = a + b;
    b = a - b; 
    a = a - b;

    cout<<"After swappingg a = "<<a<<endl;
    cout<<"After swappingg b = "<<b<<endl;

}