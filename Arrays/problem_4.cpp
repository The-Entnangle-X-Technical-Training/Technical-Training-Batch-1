// Problem 4: Count Elements in Array
// Write a program that counts how many elements are in the array (find array size).

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number] = {};

    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }
    
    int count = sizeof(arr) / sizeof(arr[0]);
    
    cout << "The number of elements in the array is: " << count << endl;
    return 0;
}