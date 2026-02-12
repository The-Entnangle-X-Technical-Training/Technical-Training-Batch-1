//Write a program that prints this pattern for N rows

#include <iostream>
using namespace std;

int main() {
    int numberOfRows;

    cout << "Enter the number of rows: ";
    cin >> numberOfRows;

    for (int i = 1; i <= numberOfRows; i++) { 
        for (int j = 1; j <= i; j++) { 
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}