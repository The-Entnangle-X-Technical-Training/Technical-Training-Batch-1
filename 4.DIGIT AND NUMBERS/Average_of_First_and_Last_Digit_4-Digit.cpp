#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter 4-digit number: ";
    cin >> num;

    int first = num / 1000;
    int last = num % 10;

    cout << "Average: " << (first + last) / 2.0;
    return 0;
}
