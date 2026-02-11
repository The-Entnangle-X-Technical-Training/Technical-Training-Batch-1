// Problem 6: Find Minimum Element
// Write a program that finds and displays the smallest element in the array.


#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int minElement = INT8_MAX;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number];

    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }
    
    
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    
    cout << "The smallest element in the array is: " << minElement << endl;
    return 0;
}