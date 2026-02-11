// Problem 25: Check if Array has Duplicates
// Write a program that checks if any number appears more than once in the array. Display "Yes" or "No"

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
    
    for (int i = 0; i < number; ++i) {
        for (int j = i + 1; j < number; ++j) {
            if (arr[i] == arr[j]) {
                cout << "Yes, there are duplicates in the array." << endl;
                cout << " Duplicate index "<< i << " and "<< j << " are the Duplicate ";
                return 0;
            }
        }
    }
    cout << " No, there are no duplicates in the array." << endl;

    return 0;
}
