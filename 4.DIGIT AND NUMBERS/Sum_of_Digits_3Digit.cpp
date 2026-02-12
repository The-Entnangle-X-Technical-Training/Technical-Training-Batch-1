#include <iostream>
using namespace std;

int main() {
    int num, sum;
    cout << "Enter 3-digit number: ";
    cin >> num;

    sum = (num / 100) + (num / 10) % 10 + (num % 10);
    cout << "Sum of digits: " << sum;
    return 0;
}
