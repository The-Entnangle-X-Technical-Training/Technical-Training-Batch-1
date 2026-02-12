// Check if Array is Sorted (Ascending)

#include<iostream>
using namespace std;

int main(){
    int sizeArray = 0;

    cout<<"Enter the number of elements in the array :";
    cin>> sizeArray;

    int array[sizeArray];
    

    for(int i = 0; i < sizeArray; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>array[i];
    }
    bool isAsc = true;

    for(int i = 0; i < sizeArray; i++){    
        if(array[i + 1] < array[i]){
            isAsc = false;
            break;
        }   
    }

    if(isAsc){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not Sorrted ";
    }
    
    return 0;
   
}
