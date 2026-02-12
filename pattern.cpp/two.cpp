//Write a program that takes M (rows) and N (columns) and prints a rectangle pattern.

#include <iostream>
using namespace std;

int main() {
    int numberOfRows, numberOfColumns;

    cout << "Enter the number of rows (M): ";
    cin >> numberOfRows;
    cout << "Enter the number of columns (N): ";
    cin >> numberOfColumns;

    for (int i = 0; i < numberOfRows; i++) { 
        for (int j = 0; j < numberOfColumns; j++) { 
            cout << "* "; 
        }
        cout << endl;
    }

    return 0;
}