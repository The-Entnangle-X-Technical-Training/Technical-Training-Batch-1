// Problem 32: Income Tax Calculator (Simple Slabs)
// Write a program that calculates tax based on income: 0-2.5L: 0%, 2.5L-5L: 5%, 5L-10L: 20%, above
// 10L: 30%. Display tax amount.

#include <iostream>
using namespace std;

int main(){
    double income = 0;
    cout << "enter your annual income in lakhs : ";
    cin >> income;
    if(income >=0 && income <=2.5){
        cout <<"your tax amount is  : " <<income*0; 
    }else if(income >2.5 && income <=5){
        cout <<"your tax amount is  : " <<income*0.05;
    }else if(income >5 && income <=10){
        cout <<"your tax amount is  : " <<income*0.20;
    }else if(income >10){
        cout <<"your tax amount is  : " <<income*0.30;
    }else{
        cout <<"invalid income";
    }
    return 0;
}