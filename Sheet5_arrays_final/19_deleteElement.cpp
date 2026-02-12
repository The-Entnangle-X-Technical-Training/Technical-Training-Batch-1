// Delete Element at Specific 
// Insert Element at Specific Position
#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int deleteIndex = 0;
    

    cout<<"Enter the number of elements in the array :";
    cin>> inputNumber;

    int arr[inputNumber];
    int newArray[inputNumber - 1 ];

    for(int i = 0; i < inputNumber; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arr[i];
    }

    cout<<"Enter index of element to delete : ";
    cin>> deleteIndex;
    for(int i = 0; i < deleteIndex; i++){
        newArray[i] = arr[i];
    }
    for(int j = deleteIndex +1; j < inputNumber; j++){
        newArray[j-1] = arr[j];
    }

    for(int i = 0; i< inputNumber - 1; i++){
        cout<<newArray[i]<<" ";
    }

    return 0;

    
}
