//Write a program that takes a number as input and displays the number after removing its last digit.

#include <iostream>
using namespace std;
int main() {
    int num = 0;
    cout << "enter a number";
    cin>>num;

    int lastDigit = num / 10;
    cout << "number become: " << lastDigit << endl;

    return 0;

}