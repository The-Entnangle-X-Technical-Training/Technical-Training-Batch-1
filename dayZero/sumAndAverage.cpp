#include <iostream>
using namespace std;

int main()
{
    float numOne, numTwo, numThree, sum, average;

    cout << "Enter first number: ";
    cin >> numOne;

    cout << "Enter second number: ";
    cin >> numTwo;

    cout << "Enter third number: ";
    cin >> numThree;

    sum = numOne + numTwo + numThree;
    average = sum / 3;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average;

    return 0;
}