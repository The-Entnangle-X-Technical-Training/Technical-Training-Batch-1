#include<iostream>
using namespace std;

int main () {

    int marks, A, B, C, F;

    cout<<"Enter the marks = ";
    cin>>marks;

    if (marks >= 90 && marks <= 100) {
        cout<<"A";
    }
    else if (marks >= 70 && marks < 90) {
        cout<<"B";
    }
    else if (marks >= 40 && marks < 70) {
        cout<<"C";
    }
    else {
        cout<<"F";
    }

}
