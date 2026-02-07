//Simple Interest Calculator
//(V)-Principal,Rate,Time
//(O1)-input Principal,Rate,Time in %
//(O2)-calculate SI=(P*R*T)/100
//(O3)- display SI
 
#include<iostream>
using namespace std;

int main(){

    int Principal,Rate,Time,SimpleInterest;

    cout<<"Enter Principal amount:";
    cin>>Principal;

    cout<<"Enter Rate of interest(in %):";
    cin>>Rate;

    cout<<"Enter Time period(in years):";
    cin>>Time;

    SimpleInterest=(Principal*Rate*Time)/100;
    cout<<"Simple Interest:"<<SimpleInterest<<endl;
return 0;
}