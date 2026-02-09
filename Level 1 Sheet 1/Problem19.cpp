#include<iostream>
using namespace std;

int main(){
    int Principal, Rate, Time;
    int SimpleIntrest;
    int Amount;

    cout<<"Enter the Principal ="<<endl;
    cin>>Principal;

    cout<<"Enter the Rate of Intrest "<<endl;
    cin>>Rate;

    cout<<"Enter the time = "<<endl;
    cin>>Time;

    SimpleIntrest = (Principal*Rate*Time)/100;
    Amount = Principal + SimpleIntrest;

    cout<<"Simple Intrest = "<<SimpleIntrest<<endl;
    cout<<"Amount = "<<Amount<<endl;

}
