#include <iostream>
using namespace std;

int main() {
    int waterUsage;
    double bill = 0;

    
    cout << "Enter water usage (in liters): ";
    cin >> waterUsage;

    
    if (waterUsage <= 5000) {
        bill = waterUsage * 2;
    } 
    else if (waterUsage <= 10000) {
        bill = (5000 * 2) + (waterUsage - 5000) * 3;
    } 
    else {
        bill = (5000 * 2) + (5000 * 3) + (waterUsage - 10000) * 5;
    }

    if (waterUsage < 3000) {
        bill = bill - (bill * 15 / 100);
        cout << "15% Conservation Discount Applied!" << endl;
    }

    cout << "Total Water Bill: ₹" << bill << endl;

    return 0;
}
