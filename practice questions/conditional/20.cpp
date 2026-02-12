// Write a program that calculates electricity bill:
// If units <= 100: Rate = ₹5 per unit
// If units > 100: Rate = ₹7 per unit Display total bill amount
#include<iostream>
using namespace std;
int main(){

int units=0;

cout<<"entre the unit:";
cin>>units;
if(units<=100){
    cout<<"Rate = ₹5 per unit";
}

else if (units>100){
    cout<<"Rate = ₹7 per unit Display total bill amount";
}
return 0;}