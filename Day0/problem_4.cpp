#include <iostream>
using namespace std;

int main() {
    float principal, rate, time;
    float si, total;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter interest rate of months: ";
    cin >> rate;

    cout << "Enter time period in months: ";
    cin >> time;

    si = (principal * rate * time) / 100;
    total = principal + si;

    cout << " Simple Interest = " << si << endl;
    cout << " Total Amount = " << total << endl;

    return 0;
}
