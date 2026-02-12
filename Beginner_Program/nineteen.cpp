//simple interest with total amount
#include<iostream>
using namespace std;
int main(){

    int simpleIntrest = 0 , totalAmount = 0;
    int principle = 0, rate = 0, time = 0 ;

    cout<<"Enter Principle :";
    cin>>principle;
    cout<<"Enter Rate :";
    cin>>rate;
    cout<<"Enter Time :";
    cin>>time;

    simpleIntrest = principle * rate * time / 100 ;
    totalAmount = simpleIntrest + principle ;

    cout<<"The Simple Intrest is :"<<simpleIntrest<<endl;
    cout<<"The total Amount is :"<<totalAmount;
    return 0;
}