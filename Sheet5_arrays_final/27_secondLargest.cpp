// Find Second Largest Element

#include<iostream>
using namespace std;

int main(){
    int sizeArray = 0;
    int max=0;
    int secondMax = 0;

    cout<<"Enter the number of elements in the array :";
    cin>> sizeArray;

    int array[sizeArray];
    

    for(int i = 0; i < sizeArray; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>array[i];
    }


    for(int i = 0; i < sizeArray; i++){    
        if(array[i ] > max){
            max = array[i];
        }   
    }
    for(int i = 0; i < sizeArray; i++){    
        if((array[i] < max) && (array[i] > secondMax)){
           secondMax = array[i];
        }   
    }
 
cout<<"Second Largest element : "<<secondMax;

    return 0;
   
}
