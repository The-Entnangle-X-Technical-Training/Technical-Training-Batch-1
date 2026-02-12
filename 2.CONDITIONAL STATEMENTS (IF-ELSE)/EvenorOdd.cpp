#include <iostream>
using namespace std;

int main()
{
    int numberTwo;

    cout << "Enter a number: ";
    cin >> numberTwo;

    if (numberTwo % 2 == 0)  // % gives the remainder
    {
        cout << "The number is Even";
    }
    else
    {
        cout << "The number is Odd";
    }

    return 0;
}
