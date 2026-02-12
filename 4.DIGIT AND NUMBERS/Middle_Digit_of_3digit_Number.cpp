#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter 3-digit number: ";
    cin >> num;

    cout << "Middle digit: " << (num / 10) % 10;
    return 0;
}
