// Problem 3: Sum of Array Elements
// Write a program that calculates and displays the sum of all elements in an array

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number] = {};
    
    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < number; ++i) {
        sum += arr[i];
    }
    
    cout << "The sum of the array elements is: " << sum << endl;
    return 0;
}