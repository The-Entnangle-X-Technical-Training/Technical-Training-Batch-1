// Problem 21: Square with Row Numbers
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
// Write a program that prints N×N square where each row shows its row number

#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout << "Enter the size of the square: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}