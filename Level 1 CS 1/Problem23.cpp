#include<iostream>
using namespace std;

int main () {

    int number;

    cout<<"Enter the number = ";
    cin>>number;

    if (number % 2 == 0 && number % 3 == 0) {
        cout<<"Yes ";
    }
    else {
        cout<<"No";
    }
 }