//Month Days Calculator

#include<iostream>
using namespace std;

int main(){

    int monthNumber;
    int year;

    cout<<"month number:";
    cin>>monthNumber;

    cout<<"year:";
    cin>>year;

    if(monthNumber==1 || monthNumber==3 || monthNumber==5 || monthNumber==7 || monthNumber==8 || monthNumber==10||
       monthNumber==12){
        cout<<"31 days";
    }
    else if(monthNumber==4 || monthNumber==6 || monthNumber==9 || monthNumber==11){
        cout<<"30 days";
    }
    else{
        cout<<"28 0r 29 days";
    }
}
