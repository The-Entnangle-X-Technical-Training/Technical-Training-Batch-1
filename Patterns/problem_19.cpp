// Problem 19: Pyramid - Single Star Growth
//    *
//   * *
//  * * *
// * * * *
// Write a program that prints centered pyramid with stars for N rows.

#include <iostream>
using namespace std;

int main() {
    int N=0;
    cout << "Enter number of rows (N): ";
    cin >> N;

    for(int i = 1; i <= N; i++){
        // Print spaces
        for(int j = 1; j <= N - i; j++){
            cout << " ";
        }
        // Print stars
        for(int k = 1; k <= i; k++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}