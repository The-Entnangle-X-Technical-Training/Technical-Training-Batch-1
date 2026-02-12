#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter 2-digit number: ";
    cin >> num;

    cout << "Reverse: " << (num % 10) * 10 + (num / 10);
    return 0;
}
