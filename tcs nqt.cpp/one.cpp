#include<iostream>
using namespace std;

int main() {
    int weight = 0;
    cout << "enter your weight in kg:";
    cin >> weight;

    int distance = 0;
    cout << "enter the distance in km:";
    cin >> distance;

    const int MIN_WEIGHT = 1;
    const int MAX_WEIGHT = 10000000;
    const int MIN_DISTANCE = 1;
    const int MAX_DISTANCE = 10000000;

    int shippingCost = 0;

    if (weight >= MIN_WEIGHT && weight <= MAX_WEIGHT && 
        distance >= MIN_DISTANCE && distance <= MAX_DISTANCE) {
        shippingCost = 5 + ((2 * weight) + (0.5 / 10 * distance));
    }
   
    cout << "The shipping cost is: " << shippingCost << " dollars." << endl;
    return 0;
}