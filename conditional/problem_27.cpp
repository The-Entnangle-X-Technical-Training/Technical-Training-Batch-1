// Problem 27: Electricity Bill with Slab Rates
// Write a program that calculates electricity bill based on units: 0-100 units: ₹5/unit, 101-200: ₹7/unit, 201
// 300: ₹10/unit, above 300: ₹15/unit. Display total bill.

#include <iostream>
using namespace std;

int main(){
    int units = 0;
    cout << "enter the number of units consumed : ";
    cin >> units;
    if(units >=0 && units <=100){
        cout <<"total bill is : " <<units*5;
    }else if(units >=101 && units <=200){
        cout <<"total bill is : " <<units*7;
    }else if(units >=201 && units <=300){
        cout <<"total bill is : " <<units*10;
    }else if(units >300){
        cout <<"total bill is : " <<units*15;
    }else{
        cout <<"invalid number of units";
    }
    return 0;
}