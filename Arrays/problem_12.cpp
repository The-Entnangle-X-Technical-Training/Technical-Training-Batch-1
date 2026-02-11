// Problem 12: Search for a Number
// Write a program that takes a number X and checks if it exists in the array. Display "Found" or "Not
// Found".

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int Search = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number] ={};
    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }

    cout <<" enter the number you want to search : ";
    cin >> Search;
    cout << "The array elements are: ";

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        if(arr[i]==Search){
            cout << "Found in index : " << i ; 
            return 0;
        }  
    }
    cout << " Not Found ";
    
    return 0;
}