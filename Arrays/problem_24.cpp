// Problem 24: Display Elements at Odd Positions
// Write a program that displays elements at odd indices (1, 3, 5, ...)

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
    
    cout << "The array elements at Odd positions are: ";
    for (int i = 1; i < (sizeof(arr) / sizeof(arr[0])); i += 2) {
        cout << arr[i] <<" " ;
    }
    
    return 0;
}