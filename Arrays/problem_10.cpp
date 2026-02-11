// Problem 10: Sum of Even Numbers
// Write a program that calculates the sum of only even numbers in the array

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int SumOfEven = 0;

    cout <<" Enter the number of array size : ";
    cin >> number;
    int arr[number] ={};
    cout << "Enter "<<number <<" Number : ";
    for (int i = 0; i < number; ++i) {
        cin >> arr[i];
    }

    cout << "The array elements are: ";

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); ++i) {
        if(arr[i]%2== 0){
            SumOfEven += arr[i];
        }
        cout << arr[i] <<" " ;
    }
    cout << "\nthe Sum of only even number in Arrays is : " << SumOfEven;
    
    return 0;
}

