//Diamond star pattern

#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    // Upper half of diamond
    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int space = 0; space < rows - i; space++) {
            cout << " ";
        }
        // Print stars
        for (int star = 0; star < (2 * i - 1); star++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = rows - 1; i >= 1; i--) {
       
        for (int space = 0; space < rows - i; space++) {
            cout << " ";
        }
        
        for (int star = 0; star < (2 * i - 1); star++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}