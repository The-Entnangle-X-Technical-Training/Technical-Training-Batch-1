// Problem 16: Find Position of Maximum
// Write a program that finds at which position (index) the maximum element is located.

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int maxElement = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number]={};
    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        if (arr[i] > arr[maxElement]) {
            maxElement = i;
        }
    }
    
    cout << "The largest element in the array index is: " << maxElement << endl;
    return 0;
}