// Problem 20: Right Triangle - Increasing Stars
// *
// **
// ***
// ****
// Write a program that prints stars without spaces (continuous) for N rows

#include <iostream>
using namespace std;

int main() {
    int N=0;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}