#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;

    cout<<"Enter the number of elements in the array :";
    cin>> inputNumber;

    int arr[inputNumber] = {};

    for(int i = 0; i < inputNumber; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arr[i];
    }
    cout<<"Array : ";
    for(int i = 0; i < inputNumber; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

    
}

// vector<int> inputArrray(int number){
//     int arr[number] = {};

//     for(int i = 1; i <= number; i++){
//         cout<<"Enter element "<<i<<" of array :";
//         cin>>arr[i];
//     }
//     return arr;
// }

// void printArray(int number){
//     cout<<"Array : ";
//     for(int i =1; i<= number; i++){
//         cout<<arr[i]<<" ";
//     }

// }