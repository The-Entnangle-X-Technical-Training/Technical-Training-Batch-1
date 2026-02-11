#include<iostream>
using namespace std;

int main () {

    int a, b;

    cout<<"Enter a =";
    cin>>a;
    cout<<"Enter b =";
    cin>>b;

    if (a < b) {
        cout<<"a is smaller than b = "<<a<<endl;
    }
    else if (a > b) {
        cout<<"b is smaller than a = "<<b<<endl;
    }
    else {
        cout<<"They are equal"<<endl;
    }
}