//

#include <iostream>
using namespace std;

int main() {
    int units;
    float bill;

    cout << "Enter units: ";
    cin >> units;

    if (units <= 100){
        bill = units * 5;
    }
    else{
        units > 100;
        bill = units * 7;
    }
    cout << "total bill = Rs. " << bill;
    return 0;
}
