// Problem 22: Count Numbers Greater Than 10
// Write a program that counts how many numbers in the array are greater than 10.

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int count = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number] ={};
    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }
    
    cout << "The array elements are: ";
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        if(arr[i] > 10){
            count += 1;
        }
        cout << arr[i] <<" " ;
    }
    cout << "\nthe Count of numbers greater than 10 in Arrays is : " << count;
    return 0;
}
