// Problem 23: Display Elements at Even Positions
// Write a program that displays elements at even indices (0, 2, 4, ...)

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
    
    cout << "The array elements at even positions are: ";
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i += 2) {
        cout << arr[i] <<" " ;
    }
    
    return 0;
}