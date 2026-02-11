// Problem 5: Find Maximum Element
// Write a program that finds and displays the largest element in the array

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int maxElement = INT8_MIN;

    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number]={};

    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    cout << "The largest element in the array is: " << maxElement << endl;
    return 0;
}