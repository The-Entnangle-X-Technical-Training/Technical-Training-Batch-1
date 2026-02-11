// Problem 2: Display Array Elements with Index
// Write a program that displays each array element with its index number

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number] ={};

    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }

    cout << "Array elements with their indices:" << endl;
    for (int i = 0; i < number; ++i) {
        cout << "Index " << i << ": " << arr[i] << endl;
    }
    
    return 0;
}