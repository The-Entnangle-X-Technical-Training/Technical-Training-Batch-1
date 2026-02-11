// Problem 7: Display Array in Reverse
// Write a program that displays array elements in reverse order (without modifying the array)

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number]={};

    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }

    cout << "The array elements are: ";
    for (int i =  (sizeof(arr) / sizeof(arr[0])); i > 0; i--) {
        cout << arr[i-1] << " ";
    }
    cout << endl;
    return 0;
}