// Problem 25: Plus Sign Pattern
//   *
//   *
// * * * * *
//   *
//   *
// Write a program that prints a plus (+) sign pattern using stars

#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout << "Enter the size of the plus sign (odd number): ";
    cin >> n;


    int mid = n / 2 + 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == mid || j == mid) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}