#include<iostream>
using namespace std;

int main () {

    int age;

    cout<<"Enter the age = ";
    cin>>age;

    if (age <= 18) {
        cout<<"The person is a minor"<<endl;
    }
    else {
        cout<<"The person is an adult"<<endl;
    }

    
}