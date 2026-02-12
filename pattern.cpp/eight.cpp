//Write a program that prints this inverted pattern for N rows.

#include <iostream>
using namespace std;

int main() {
    int numberOfRows;

    cout << "Enter the number of rows (N): ";
    cin >> numberOfRows;

    for (int i = numberOfRows; i >= 1; i--) { 
        for (int j = 1; j <= i; j++) { 
            cout << "* "; 
        }
        cout << endl;
    }

    return 0;
}