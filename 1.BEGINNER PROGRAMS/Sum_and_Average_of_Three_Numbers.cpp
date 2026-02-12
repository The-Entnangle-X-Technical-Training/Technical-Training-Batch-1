#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    int sum;
    float average;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    sum = num1 + num2 + num3;
    average = sum / 3.0;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
