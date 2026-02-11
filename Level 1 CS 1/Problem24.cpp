#include <iostream>
using namespace std;

int main() {
    float temp;

    cout << "Enter temperature: ";
    cin >> temp;

    if (temp < 15) {
        cout << "Cold" << endl;
    }
    else if (temp >= 15 && temp <= 30) {
        cout << "Normal" << endl;
    }
    else {
        cout << "Hot" << endl;
    }

    return 0;
}
