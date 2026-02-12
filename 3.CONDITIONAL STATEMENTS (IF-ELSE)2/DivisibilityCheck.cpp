#include <iostream>
using namespace std;

int main() {
    int dividend, divisor;

    cout << "Enter dividend: ";
    cin >> dividend;

    cout << "Enter divisor: ";
    cin >> divisor;

    
    if (divisor == 0) {
        cout << "Division by zero is not allowed." << endl;
    } 

    else if (dividend % divisor == 0) {
        cout << "Divisible" << endl;
    } else {
        cout << "Not Divisible" << endl;
    }

    return 0;
}
