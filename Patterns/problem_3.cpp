// Problem 3: Right Triangle - Stars (Increasing)
// *
// * *
// * * *
// * * * *
// Write a program that prints this star pattern for N rows

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}