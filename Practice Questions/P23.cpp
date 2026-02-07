//Electricity Bill Calculator
//(O1)- Unit,rate ,total bill amount
//(O2)- input unitsConsumed,rate
//(O3)- Electricity Bill = (Unit × Rate per Unit)
//(O4)- display total bill amount 


#include<iostream>
using namespace std;

int main(){
    int unit;
    int rate;
    int totalBillamount;

    cout<<"Unit Consumed=";
    cin>>unit;

    cout<<"Rate=";
    cin>>rate;
 
    totalBillamount=unit*rate;
    cout<<"Total Bill Amount="<<totalBillamount;
}