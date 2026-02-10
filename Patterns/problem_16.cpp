// Problem 16: Vertical Line of Stars
// *
// *
// *
// *
// Write a program that prints N stars vertically (one per line)

#include <iostream>
using namespace std;

int main() {
    int N=0;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        cout  << "* " << endl;
    }

    return 0;
}