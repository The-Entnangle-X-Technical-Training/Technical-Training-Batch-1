//Problem 25: Simple Discount Calculator

#include<iostream>
using namespace std;

int main(){

    int amount,discount=0;

    cout<<"Amount=";
    cin>>amount;

    if(amount>=1000){
        discount=amount*0.10;
    }
    else{
        cout<<"No Discount"<<endl;
    }

    cout<<"Amount after Discount="<<discount;
}