// SIMPLE INTERREST CALCULATOR

// Variable = principal,rate,time,simpleinterest,amount
// O1 = principal , rate , time
// O2 = calculate SI (p*r*t/100)
// O3 = calculate amount A = P + SI
// o4 = display SI , A


#include <iostream>
using namespace std;
int main(){

    
    int principal,rate,time,simpleinterest,amount;

    cout<<"principal:";
    cin>>principal;

    cout<<"rate:";
    cin>>rate;

    cout<<"time:";
    cin>>time;

    simpleinterest=principal*rate*time;
    amount=principal+simpleinterest;


    cout<<"simpleinterest"<<simpleinterest<<endl;
    cout<<"amount"<<amount<<endl;
    
    
    return 0;

}




