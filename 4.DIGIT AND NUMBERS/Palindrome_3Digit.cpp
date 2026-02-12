#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter 3-digit number: ";
    cin >> num;

    if (num / 100 == num % 10)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
