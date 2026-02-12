#include <iostream>
using namespace std;

int main() {
    int numberOne = 10;
    int numberTwo;

    cout << "Initial value: " << numberOne << endl;

    numberOne = 20;
    cout << "After updating to 20: " << numberOne << endl;

    numberOne = numberOne + 5;
    cout << "After adding 5: " << numberOne << endl;

    numberTwo = numberOne * 2;
    cout << "After multiplying by 2: " << numberTwo << endl;

    return 0;
}