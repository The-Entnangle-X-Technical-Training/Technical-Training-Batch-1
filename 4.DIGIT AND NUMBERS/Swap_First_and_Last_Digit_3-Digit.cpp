#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter 3-digit number: ";
    cin >> num;

    int result = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    cout << "After swap: " << result;
    return 0;
}
