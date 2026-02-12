#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if ((num % 10) % 2 == 0)
        cout << "Last digit is Even";
    else
        cout << "Last digit is Odd";

    return 0;
}
