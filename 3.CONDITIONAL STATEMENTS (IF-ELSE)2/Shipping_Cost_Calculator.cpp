#include <iostream>
using namespace std;

int main() {
    double weight, distance;
    double totalCost = 50; // Base cost

    
    cout << "Enter package weight (kg): ";
    cin >> weight;

    cout << "Enter distance (km): ";
    cin >> distance;

    
    if (weight > 5) {
        totalCost += (weight * 10);
    }

    
    if (distance > 100) {
        totalCost += (distance * 5);
    }

    
    if (weight > 5 && distance > 100) {
        totalCost += 20;
    }

    
    cout << "Total Shipping Cost: ₹" << totalCost << endl;

    return 0;
}
