#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int target = 0;
    bool targetFound = false;
    
    cout<<"Enter the number of elements in the array :";
    cin>> inputNumber;
    cout<<"Enter the target value : ";
    cin>>target;

    int arr[inputNumber] = {};
    int count = 0;

    for(int i = 0; i < inputNumber; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arr[i];

        if(arr[i]== target){
            count++;
    }
    }
    cout<<"Number of occurance of Target number : "<<count;

    return 0;
   
}