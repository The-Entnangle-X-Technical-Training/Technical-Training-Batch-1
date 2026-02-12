//20: Duck Number Checker (4-digit)

#include <iostream>
using namespace std;

int main() {
    int number, A,B,C,D=0;

    cout << "Enter a 4-digit number: ";
    cin >> number;

    A= number / 1000;          // first digit
    B= (number / 100) % 10;
    C = (number / 10) % 10;
    D= number % 10;

    if (A != 0 && (B == 0 || C== 0 || D== 0)){
        cout << "Duck Number";
    }
    else{
        cout << "Not a Duck Number";

    }

    return 0;
}
