#include<iostream>
using namespace std;

int main () {

    int a, b;

    cout<<"Enter a =";
    cin>>a;
    cout<<"Enter b =";
    cin>>b;

    if (a > b) {
        cout<<"a is greater than b = "<<a<<endl;
    }
    else if (a < b) {
        cout<<"b is greater than a = "<<b<<endl;
    }
    else {
        cout<<"They are equal"<<endl;
    }
}