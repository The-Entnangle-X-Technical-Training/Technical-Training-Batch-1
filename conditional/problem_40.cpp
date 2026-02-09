// Problem 40: Water Bill with Conservation Incentive
// Write a program that calculates water bill: 0-5000L: ₹2/L, 5001-10000L: ₹3/L, above 10000L: ₹5/L. If
// usage < 3000L, give 15% discount (conservation reward). Display total bill

#include <iostream>
using namespace std;

int main(){
    double waterUsage = 0.0;
    double billAmount = 0.0;

    cout << "Enter water usage in liters: ";
    cin >> waterUsage;

    if(waterUsage <= 5000){
        billAmount = waterUsage * 2;
    } else if(waterUsage <= 10000){
        billAmount = (5000 * 2) + ((waterUsage - 5000) * 3);
    } else {
        billAmount = (5000 * 2) + (5000 * 3) + ((waterUsage - 10000) * 5);
    }

    if(waterUsage < 3000){
        billAmount *= 0.85;
    }

    cout << "Total Water Bill: ₹" << billAmount << endl;
    return 0;
}