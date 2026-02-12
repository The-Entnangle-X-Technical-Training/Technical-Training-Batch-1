//Write a program that prints multiplication table of 5 from 5×1 to 5×10.

#include<iostream>
using namespace std;

int main() {
    int number = 5;

    for (int i = 1; i <= 10; i++) {
        cout << number << " x" << i << " =" << number * i << endl;
    }
}