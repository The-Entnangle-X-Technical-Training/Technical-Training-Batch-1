#include <iostream>
using namespace std;

int main() {
    int units;
    float rate, bill;

    cout << "Enter units consumed: ";
    cin >> units;

    cout << "Enter rate per unit: ";
    cin >> rate;

    bill = units * rate;

    cout << "Total electricity bill = " << bill << endl;

    return 0;
}
