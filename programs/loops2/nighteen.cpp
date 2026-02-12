//Write a program that checks if a number is an Armstrong number (sum of cubes of digits equals the
//number itself).

#include <iostream>
using namespace std;
int main() {
    int n, sum, temp, digit = 0;

    cout << "enter a number: ";
    cin >> n;

    temp = number;

    while (temp!=0) {
        digit = temp % 10;
        sum = sum (digit * digit * digit);
        temp = temp / 10;

        if (sum == n) {
            cout << "armstrong";
        } else {
            cout << "not a armstrong";
        }

        return 0;
    }

}
