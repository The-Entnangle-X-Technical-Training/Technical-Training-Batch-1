// Problem 39: Shipping Cost Calculator
// Write a program that calculates shipping cost based on: weight (kg) and distance (km). Base cost: ₹50.
// Add ₹10/kg if weight > 5kg. Add ₹5/km if distance > 100km. If both conditions true, add ₹20 extra.
// Display total shipping cost

#include <iostream>
using namespace std;

int main(){
    double weight = 0.0;
    double distance = 0.0;
    double shippingCost = 50.0; 

    cout << "Enter the weight of the package (kg): ";
    cin >> weight;
    cout << "Enter the distance to be covered (km): ";
    cin >> distance;
    if(weight > 5){
        shippingCost += (weight - 5) * 10; 
    }
    if(distance > 100){
        shippingCost += (distance - 100) * 5; 
    }
    if(weight > 5 && distance > 100){
        shippingCost += 20; 
    }
    cout << "Total Shipping Cost: ₹" << shippingCost << endl;
    return 0;
}