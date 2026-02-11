// Problem 18: Count Occurrences of a Number
// Write a program that counts how many times a specific number X appears in the array.

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int X = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number] ={};

    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }
    
    cout << "Enter the number for counting its occurrences: ";
    cin >> X;
    int count = 0;
    cout << "The array elements are: ";
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        if(arr[i] == X){
            count++;
        }
        cout << arr[i] <<" " ;
    }
    cout << "\nThe number " << X << " appears " << count << " times in the array." << endl;
    return 0;

}