// Write a program that takes a 3-digit number as input and extracts and displays the middle digit.

#include <iostream>
using namespace std;
int main() {
    int num = 0;

    cout << "enter a 3 digit number";
    cin >> num;

int middleDigit = (num / 10) % 10;
cout << "middle digit is: " << middleDigit << endl;

return 0;

}