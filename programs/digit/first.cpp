//Write a program that takes a 3-digit number as input and extracts and displays the first digit.

#include <iostream>
using namespace std;
int main() {
    int num = 0;

    cout << "enter a 3 digit number";
    cin >> num;

    int firstDigit = num / 100;
    cout<<" first digit is :" << firstDigit << endl;

    return 0;

}