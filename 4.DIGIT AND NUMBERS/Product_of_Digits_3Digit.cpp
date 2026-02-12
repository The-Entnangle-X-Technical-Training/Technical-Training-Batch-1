#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter 3-digit number: ";
    cin >> num;

    int product = (num / 100) * ((num / 10) % 10) * (num % 10);
    cout << "Product: " << product;
    return 0;
}
