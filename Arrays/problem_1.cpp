// Problem 1: Input and Display Array
// Write a program that takes 5 numbers as input, stores them in an array, and displays all elements.

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {};
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }
    cout << "The array elements are: ";
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}