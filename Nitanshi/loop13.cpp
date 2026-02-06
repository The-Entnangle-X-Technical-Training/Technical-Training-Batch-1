#include <iostream>
using namespace std;

int main() {
    int number, count = 0;

    cout << "Enter number: ";
    cin >> number;

    if (number < 0) {
        number = -number;  
    }

    if (number == 0) {
        count = 1;
    } else {
        while (number > 0) {
            count++;
            number = number / 10;
        }
    }

    cout << count;

    return 0;
}
