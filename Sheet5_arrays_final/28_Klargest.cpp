// Find Kth Largest Element
// Find Second Largest Element

#include<iostream>
using namespace std;

int main(){
    int sizeArray = 0;
    int maxOne=0;
    int maxTwo = 0;
    int final = 0;

    cout<<"Enter the number of elements in the array :";
    cin>> sizeArray;

    int array[sizeArray];
    

    for(int i = 0; i < sizeArray; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>array[i];
    }
    int k = 0;
    cout<<"Enter value of K : ";
    cin>>k;

for(int i = 0; i < k; i++){
    for(int j = 0; j < sizeArray; j++){    
        if(array[j ] > maxOne){
            maxOne = array[j];
        }   
    }
    for(int l = 0; l < sizeArray; l++){    
        if((array[l] < maxOne) && (array[l] > maxTwo)){
           maxTwo = array[l];
           final = maxTwo;
        }   
    }
    maxOne = maxTwo;
    maxTwo = 0;
}
 
cout<<"K th Largest element : "<<final;

    return 0;
   
}
