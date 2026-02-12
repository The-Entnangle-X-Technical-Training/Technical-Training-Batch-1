#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Last digit: " << num % 10;
    return 0;
}
