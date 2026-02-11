#include<iostream>
using namespace std;

int main () {

    int a;

    cout<<"Enter a = ";
    cin>>a;

    if (a % 10 == 0) {
        cout<<"Divisible by 10"<<endl;
    }
    else {
        cout<<"Not divisible by 10"<<endl;
    }
}