// Insert Element in Sorted Array
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int newElement = 0;
    int newIndex = 0;

    cout<<"Enter the number of elements in the array :";
    cin>> inputNumber;

    int arr[inputNumber];
    int newArray[inputNumber +1 ];

    cout<<"Enter Elements in sorted manner !"<<endl;

    for(int i = 0; i < inputNumber; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arr[i];
    }

    cout<<"Enter the new element : ";
    cin>>newElement;
   
    for(int i = 0; i < inputNumber + 1; i++){
        if((arr[i] < newElement) && (arr[i+1] > newElement)){
            newIndex = i+1;}
    }
cout<<"NewIndex : "<<newIndex<<endl;
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
