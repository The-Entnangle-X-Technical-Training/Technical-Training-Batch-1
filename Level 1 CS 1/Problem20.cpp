#include<iostream>
using namespace std;

int main () {

    int units, rate, totalBill;
    cout<<"Enter the number of units = ";
    cin>>units;

    if (units <=  100) {
        rate = 5;
    }
    else {
        rate = 7;
    }

    totalBill = units * rate;
    cout<<"The total bill = "<<totalBill;

}