#include<iostream>
using namespace std;

int main () {

    int number;
    cout<<"Enter the number = ";
    cin>>number;

    if (number > 0 && number <= 9) {
        cout<<"Single digit";
    }
    else {
        cout<<"Not a single digit";
    }
}