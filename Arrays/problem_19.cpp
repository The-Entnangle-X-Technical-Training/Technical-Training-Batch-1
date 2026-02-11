// Problem 19: Copy Array to Another Array
// Write a program that copies all elements from one array to another array.

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
    return 0;

}