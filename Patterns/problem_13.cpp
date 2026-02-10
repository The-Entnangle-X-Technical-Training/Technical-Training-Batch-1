// Problem 13: Alphabet Pattern (Single Letter)
// A
// A A
// A A A
// A A A A
// Write a program that prints letter A in triangle pattern for N rows.

#include <iostream>
using namespace std;

int main() {
    int N=0;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            cout <<"A ";
        }
        cout << endl;
    }

    return 0;
}