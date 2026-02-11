// Problem 15: Average of Array Elements
// Write a program that calculates the average of all array elements.

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int SumOfArray = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number] ={};

    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }

    cout << "The array elements are: ";

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        SumOfArray += arr[i]; 
        cout << arr[i] <<" " ;
    }
    cout << "\nthe Average number of Arrays is : " << (SumOfArray/(sizeof(arr) / sizeof(arr[0])));
    
    return 0;
}