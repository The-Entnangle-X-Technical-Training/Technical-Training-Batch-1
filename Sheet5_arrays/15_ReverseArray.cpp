#include<iostream>
using namespace std;

int main(){

    int arraySize = 0;
    int array[arraySize] = {};

    cout<<"Enter the length of the array : ";
    cin>>arraySize;
    
    for(int i = 0; i < arraySize; i++){
        cout<<"Enter element "<<i+1<<" of the array : ";
        cin>>array[i];
    }

    int temp = 0;
    int last = arraySize -1;
    for(int j = 0; j < arraySize / 2 ; j++){
        temp = array[j];
        array[j] = array[last - j];
        array[last - j] = temp;
    }
    cout<<"Array : ";
    for(int i = 0; i < arraySize; i++){
        
        cout<<array[i]<<" ";
    }

    return 0;
}