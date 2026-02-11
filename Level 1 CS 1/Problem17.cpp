#include<iostream>
using namespace std;

int main () {

    int year;

    cout<<"Enter the year = ";
    cin>>year;

    if (year % 4) {
        cout<<"The year is leap year";
    }
    else {
        cout<<"Its the normal year";
    }
}