// Problem 23: Print Stars Equal to Row Number
// *
// * *
// * * *
// * * * *
// * * * * *
// Write a program that prints row number of stars in each row for N rows

#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}