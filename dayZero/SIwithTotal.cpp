#include<iostream>
using namespace std;

int main() 
{
    int principal, rate, time, total, simpleInterest;
    
    cout<<"Enter the value of principal : ";
    cin>>principal;

    cout<<"Enter the value of rate : ";
    cin>>rate;

    cout<<"Enter the value of time : ";
    cin>>time;

    simpleInterest = (principal * rate * time) /100;
    total = principal + simpleInterest;

    cout<<"Principal = "<<principal<<", Rate = "<<rate<<", Time = "<<time<<endl;
    cout<<"Simple Interest = "<<simpleInterest<<endl;
    cout<<"Total = "<<total;

    return 0;
}