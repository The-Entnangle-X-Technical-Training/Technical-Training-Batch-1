#include <iostream>
using namespace std;

int main()
{
    int numberOne, numberTwo;

    cout << "Enter first number: ";
    cin >> numberOne;

    cout << "Enter second number: ";
    cin >> numberTwo;

    if (numberOne > numberTwo)
    {
        cout << "The greater number is: " << numberOne;
    }
    else if (numberTwo > numberOne)
    {
        cout << "The greater number is: " << numberTwo;
    }
    else
    {
        cout << "Both numbers are equal.";
    }

    return 0;
}
