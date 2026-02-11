// Problem 14: Count Negative Numbers
// Write a program that counts how many negative numbers are in the array

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int NegativeNumber = 0;
    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number] ={};
    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        if(arr[i] < 0){
            NegativeNumber += 1; 
        }  
        cout << arr[i] <<" " ;
    }
    cout << "\nthe Count of Negative number in Arrays is : " << NegativeNumber;
    
    return 0;
}