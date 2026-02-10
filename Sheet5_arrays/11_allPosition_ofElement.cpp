// only working with array size <=8
#include<iostream>
using namespace std;

int main(){
    int arrayLength = 0;
    int arr[arrayLength]={};
    int target = 0;

    cout<<"Enter the length of array : ";
    cin>>arrayLength;
    cout<<"Enter the target number : ";
    cin>>target;

    for(int i = 0; i < arrayLength; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arr[i];
    }
    for(int j = 0; j < arrayLength; j++){

        if(arr[j] == target){
            cout<<j<<" ";
        }
    }

    return 0;
}