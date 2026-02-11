// Problem 20: Reverse Array (In-Place)
// Write a program that reverses the array by modifying it. Example: [1,2,3,4,5] becomes [5,4,3,2,1]

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number] ={};
    int array2[number]= {};
    
    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }
    cout << "The array elements are: ";
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        array2[i] = arr[i];
        cout << array2[i] <<" " ;
    }
    cout << "\nReversed array is: ";
    for (int i = (sizeof(arr) / sizeof(arr[0])) -1; i >= 0; --i) {
        cout << array2[i] <<" " ;
    }
    return 0;

}