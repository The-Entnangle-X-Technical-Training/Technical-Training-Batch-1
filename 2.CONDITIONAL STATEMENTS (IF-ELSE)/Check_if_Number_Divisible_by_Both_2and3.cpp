#include <iostream>
using namespace std;

int main() {
    int number;

 
    cout << "Enter a number: ";
    cin >> number;

   
    if (number % 2 == 0 && number % 3 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
