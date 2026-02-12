//Problem 27: Electricity Bill with Slab Rates

#include <iostream>
using namespace std;

int main() {
    int units;
    float bill;

    cout << "Enter units: ";
    cin >> units;

    if (units <= 100)
        bill = units * 5;

    else if (units <= 200)
        bill = units * 7;

    else if (units <= 300)
        bill = units * 10;

    else
        bill = units * 15;

    cout << "total bill = Rs. " << bill;

    return 0;
}
