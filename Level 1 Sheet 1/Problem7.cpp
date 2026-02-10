#include<iostream>
using namespace std;

int main() {

    int Principal, Rate, Time;
    int SimpleIntrest;

    cout<<"Enter the principal = ";
    cin>>Principal;
    cout<<"Enter the raye = ";
    cin>>Rate;
    cout<<"Enter the time = ";
    cin>>Time;

    SimpleIntrest = (Principal*Rate*Time)/100;
    cout<<"The simple intrest is = "<<SimpleIntrest<<endl;
}