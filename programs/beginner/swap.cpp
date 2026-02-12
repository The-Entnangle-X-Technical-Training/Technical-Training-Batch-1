// Problem 5: Swap Two Numbers Using Third Variable

#include <iostream>
using namespace std;

int main() {
    int number1, number2, temp;
    cin >> number1 >> number2;

    cout << "Before swapping:" << endl;
    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;


    temp = number1;
    number1 = number2;
    number2 = temp;

    
    cout << "After swapping:" << endl;
    cout << "number1 = " << number1 << endl;
    cout << "number2 = " << number2 << endl;

    return 0;
}