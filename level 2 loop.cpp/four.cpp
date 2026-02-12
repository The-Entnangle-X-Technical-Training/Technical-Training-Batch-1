//Write a program that takes a number and counts how many digits it has using a loop.
//Hint: Keep dividing by 10 until number becomes 0

#include<iostream>
using namespace std;

int main() {

    int number = 0;

    cout << "enter a number" << endl;
    cin >> number;

    int count = 0;

    while (number !=0) {
        number /= 10;
        count++;
    }

    cout << "number of digits in the number is:" << count << endl;
}
