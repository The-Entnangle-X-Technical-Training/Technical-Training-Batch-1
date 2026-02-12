//Write a program that calculates shipping cost based on: weight (kg) and distance (km). Base cost: ₹50.
//Add ₹10/kg if weight > 5kg. Add ₹5/km if distance > 100km. If both conditions true, add ₹20 extra.
//Display total shipping cost.

#include <iostream>
using namespace std;

int main() {
    float weight, distance, cost = 50;

    cout << "Enter weight (kg): ";
    cin >> weight;

    cout << "Enter distance (km): ";
    cin >> distance;

    if(weight > 5) {
        cost = cost + (weight * 10);
    }

    if(distance > 100) {
        cost = cost + (distance * 5);
    }

    if(weight > 5 && distance > 100) {
        cost = cost + 20;
    }

    cout << "Total shipping cost = ₹" << cost;

    return 0;
}
