//Write a program that checks if a number is divisible by both 2 and 3. Display "Yes" or "No"

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(num % 2 == 0 && num % 3 == 0) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}
