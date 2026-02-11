// Problem 11: Sum of Odd Numbers
// Write a program that calculates the sum of only odd numbers in the array.

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int SumOfOdd = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number] ={};
    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }

    cout << "The array elements are: ";

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        if(arr[i]%2== 1){
            SumOfOdd += arr[i];
        }
        cout << arr[i] <<" " ;
    }
    cout << "\nthe Sum of only Odd number in Arrays is : " << SumOfOdd;
    
    return 0;
}