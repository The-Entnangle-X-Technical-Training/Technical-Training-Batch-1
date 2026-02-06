#include <iostream>
using namespace std;

int main()
{
    int numberOne, numberTwo;

    cout << "Enter first number: ";
    cin >> numberOne;

    cout << "Enter second number: ";
    cin >> numberTwo;

    cout << "Before swapping: first number = " << numberOne << " second number = " << numberTwo<<endl;

    numberOne = numberOne + numberTwo;
    numberTwo = numberOne - numberTwo;
    numberOne = numberOne - numberTwo;

    cout << "After swapping: first number = " << numberOne << " second number = " << numberTwo;

    return 0;
}