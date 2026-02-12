//Leap year Checker

#include<iostream>
using namespace std;

int main(){

    int year;
    cout<<"year:";
    cin>>year;

    if(year%400==0){
        cout<<"Leap Year.";
    }
    else{
        cout<<"Not Leap Year.";
    }
}