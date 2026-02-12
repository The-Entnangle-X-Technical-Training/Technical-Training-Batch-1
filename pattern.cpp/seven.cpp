//Write a program that prints N rows, each having N stars

#include <iostream>
using namespace std;

int main() {
    int numberOfRows;

    cout << "Enter the number of rows (N): ";
    cin >> numberOfRows;

    for (int i = 0; i < numberOfRows; i++) { 
        for (int j = 0; j < numberOfRows; j++) { 
            cout << "* "; 
        }
        cout << endl;
    }

    return 0;
}