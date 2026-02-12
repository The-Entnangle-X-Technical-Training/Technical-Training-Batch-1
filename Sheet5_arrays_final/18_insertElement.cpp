// Insert Element at Specific Position
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int newIndex = 0;
    int newElement = 0;

    cout<<"Enter the number of elements in the array :";
    cin>> inputNumber;

    int arr[inputNumber];
    int newArray[inputNumber +1 ];

    for(int i = 0; i < inputNumber; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arr[i];
    }

    cout<<"Enter new element at index : ";
    cin>> newIndex;
    cout<<"Enter new element : ";
    cin>>newElement;

    for(int i = 0; i < newIndex; i++){
        newArray[i] = arr[i];
    }
    newArray[newIndex] = newElement;
    for(int j = newIndex +1; j < inputNumber+1; j++){
        newArray[j] = arr[j-1];
    }

    for(int i = 0; i< inputNumber +1; i++){
        cout<<newArray[i]<<" ";
    }

    return 0;

    
}
