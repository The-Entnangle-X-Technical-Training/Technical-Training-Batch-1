#include <iostream>
using namespace std;

int main()
{
    int numberOne;

    cout << "Enter a number: ";
    cin >> numberOne;

    if (numberOne > 0)
    {
        cout << "The number is Positive";
    }
    else if (numberOne < 0)
    {
        cout << "The number is Negative";
    }
    else
    {
        cout << "The number is Zero";
    }

    return 0;
}
