// Problem 22: Inverted Numbers Triangle
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// Write a program that prints this inverted number pattern for N rows.

#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}