#include<iostream>
using namespace std;

int main() {
    int base, height;
    int result = 0;

    cout<<"Enter the base = "<<endl;
    cin>>base;

    cout<<"Enter the height = "<<endl;
    cin>>height;

    result = base * height / 2;
    cout<<"The area of triangle ="<<result;
}