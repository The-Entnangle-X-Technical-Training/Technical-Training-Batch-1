//Divisibility Check

#include<iostream>
using namespace std;

int main(){

    int dividend=0;
    int divisor=0;

    cout<<"Dividend=";
    cin>>dividend;

    cout<<"Divisor=";
    cin>>divisor;

    if(dividend/divisor==0){
        cout<<"Divisible";
    }
    else{
        cout<<"Not Divisible";
    }


}