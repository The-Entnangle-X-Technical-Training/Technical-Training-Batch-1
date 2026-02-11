// Problem 21: Swap First and Last Element
// Write a program that swaps the first and last elements of the array

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
    
    if(number > 1){
        int temp = arr[0];
        arr[0] = arr[number - 1];
        arr[number - 1] = temp;
    }
    cout << "The array elements after swapping first and last are: ";
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        cout << arr[i] <<" " ;
    }
    return 0;
}