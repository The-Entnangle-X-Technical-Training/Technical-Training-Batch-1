#include<iostream>
using namespace std;
int main () {

    int a, b, temp;

    cout<<"Enter the first number = "<<endl;
    cin>>a;

    cout<<"Enter the second number = "<<endl;   
    cin>>b;

    temp = a;
    a =b;
    b = temp;

    cout<<"After swapping the first number = "<<a<<endl;
    cout<<"After swapping the second number = "<<b<<endl;


}