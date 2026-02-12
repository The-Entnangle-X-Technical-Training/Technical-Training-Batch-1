#include <iostream>
using namespace std;

int main() {
    char ch;

   
    cout << "Enter an alphabet character (A-Z or a-z): ";
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Convert lowercase to uppercase for simplicity
        char upperCh = (ch >= 'a' && ch <= 'z') ? ch - 'a' + 'A' : ch;

        if (upperCh >= 'A' && upperCh <= 'M') {
            cout << ch << " is in the first half of the alphabet." << endl;
        } else {
            cout << ch << " is in the second half of the alphabet." << endl;
        }
    } else {
        cout << "Invalid input! Not an alphabet character." << endl;
    }

    return 0;
}
