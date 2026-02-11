#include<iostream>
using namespace std;

int main () {
    int a, b, c;

    cout<<"Enter the a = ";
    cin>>a;

    cout<<"Enter the b = ";
    cin>>b;

    cout<<"Enter the c = ";
    cin>>c;

    if (a > b && a > c) {
        cout<<"a is the greatest";
    }
    else if (b > a && b > c) {
        cout<<"b is the greatest";
    }
    else if (c > a && c > b) {
        cout<<"c is the greatest";
    }
    else {
        cout<<"They are equal";
    }
  
}