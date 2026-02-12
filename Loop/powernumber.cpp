//power calculator

#include <iostream>
using namespace std;

int main()
 {
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

     int result = 1;  

    // multiply base exponent times
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}