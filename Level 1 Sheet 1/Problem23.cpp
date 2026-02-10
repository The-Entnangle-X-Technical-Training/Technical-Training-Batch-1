#include <iostream>
using namespace std;

int main() {
    float unitsConsumed, ratePerUnit, totalBill;

    cout<<"Enter total electricity units consumed: ";
    cin>>unitsConsumed;
    cout<<"Enter rate per unit: ";
    cin>>ratePerUnit;

    totalBill = unitsConsumed * ratePerUnit;
    cout<<"Total Electricity Bill Amount = "<<totalBill<<endl;

}
