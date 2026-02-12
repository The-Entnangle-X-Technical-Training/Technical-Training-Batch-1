#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter 2-digit number: ";
    cin >> num;

    if (num == (num % 10) * 10 + (num / 10))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
