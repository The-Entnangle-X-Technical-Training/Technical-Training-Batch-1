// Problem 8: Inverted Right Triangle - Stars
// * * * *
// * * *
// * *
// *
// Write a program that prints this inverted pattern for N rows.

#include <iostream>
using namespace std;

int main() {
    int N=0;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 0; i <= N; i++){
        for(int j = 1; j <= N-i; j++){
            cout <<"* ";
        }
        cout << endl;
    }

    return 0;
}