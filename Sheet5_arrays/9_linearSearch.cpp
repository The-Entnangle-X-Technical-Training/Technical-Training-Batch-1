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

    for(int i = 1; i <= inputNumber; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arr[i];
    }
    int iter = 0;
    for(int i = 0; i< inputNumber; i++){
        if(arr[i]== target){
            targetFound =true;
            iter = i;
            break;
        }
    }

    if(targetFound){
        cout<<"Target found at index : "<<iter;
    }
    else{
        cout<<"Target not found, the last element is :"<<arr[inputNumber];
    }

    return 0;
   
}