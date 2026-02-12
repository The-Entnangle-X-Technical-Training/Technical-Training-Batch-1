// 

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




