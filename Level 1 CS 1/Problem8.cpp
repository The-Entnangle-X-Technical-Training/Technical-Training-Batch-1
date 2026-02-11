#include<iostream>
using namespace std;

int main () {

    int a;

    cout<<"Enter a = ";
    cin>>a;

    if (a % 5 == 0) {
        cout<<"Divisible by 5"<<endl;
    }
    else {
        cout<<"Not divisible by 5"<<endl;
    }
}