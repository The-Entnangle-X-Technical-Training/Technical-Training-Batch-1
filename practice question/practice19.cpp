// SIMPLE INTEREST WITH TOTAL AMOUNT

// VARIABLE = principal , rate , time , simple interest , amount
// O1 = input principal , rate , time
// O2 = calculate simple interest (p*r*t)/100
// O3 = calculate the amount  A = p + sI
// O4 = display Simple interest , Amount


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




