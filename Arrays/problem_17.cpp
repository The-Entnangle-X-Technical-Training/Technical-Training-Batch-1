// Problem 17: Find Position of Minimum
// Write a program that finds at which position (index) the minimum element is located.

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int minElement =0;
    cout <<" Enter the number you want to make array size : ";
    cin >> number;
    int arr[number]= {};
    
    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }
    
    
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        if (arr[i] < arr[minElement]) {
            minElement = i;
        }
    }
    
    cout << "The minimum element in the array index is: " << minElement << endl;
    return 0;
}