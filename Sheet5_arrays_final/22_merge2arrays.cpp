#include<iostream>
using namespace std;

int main(){
    int sizeA, sizeB = 0;

    cout<<"Enter the number of elements in the array A :";
    cin>> sizeA;

    int arrayA[sizeA];

    for(int i = 0; i < sizeA; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arrayA[i];
    }

    cout<<"Enter the number of elements in the array B :";
    cin>> sizeB;

    int arrayB[sizeB];

    for(int i = 0; i < sizeB; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arrayB[i];
    }
    int finalArray[sizeA + sizeB];
   
    for(int i = 0; i < sizeA; i++){
        finalArray[i] = arrayA[i];
    }
    
    for(int j = 0; j< sizeB; j++){
        finalArray[sizeA + j] = arrayB[j];
    }
    cout<<"Final Array : "<<endl;

    for(int k = 0; k < sizeA + sizeB; k++){
        cout<<finalArray[k]<<" ";
    }
    return 0;
   
}
