//Reversed Number

#include <iostream>
using namespace std;

int main()
 {
    int number, reversed = 0, digit;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0) 
    {
        digit = number % 10;              // Extract last digit
        reversed = reversed * 10 + digit; // Build reversed number
        number /= 10;                     // Remove last digit
    }

    cout << "Reversed number is: " << reversed << endl;
    return 0;
}