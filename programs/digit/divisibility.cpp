//Write a program that takes a number as input, calculates the sum of its digits, and checks if the number is
//divisible by 3 using the digit sum rule.

#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, temp;

    cout << "enter a number";
    cin >> num;

    temp = num;
    
    while(temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }

    cout << "sum of digits" << sum << endl;

    if (sum % 3 == 0) {
        cout << " divisible by 3 ";
    } else{
        cout << "not divisible";
    }

    return 0;

}