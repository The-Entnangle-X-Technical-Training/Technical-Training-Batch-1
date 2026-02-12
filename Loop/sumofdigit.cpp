//Sum of digit

#include<iostream>
using namespace std;
 int main()
 {
    int number, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> number;

    while (number > 0)
     {
        digit = number % 10; // Get the last digit
        sum += digit;        // Add it to the sum
        number /= 10;        // Remove the last digit
    }

    cout << "The sum of the digits is: " << sum << endl;
    
    return 0;
 }