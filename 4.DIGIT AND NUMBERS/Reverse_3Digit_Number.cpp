#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter 3-digit number: ";
    cin >> num;

    int rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    cout << "Reverse: " << rev;
    return 0;
}
