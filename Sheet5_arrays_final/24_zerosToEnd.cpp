// Move All Zeros to End
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
int var = 0;
    for(int i = 0; i < sizeArray; i++){
        
        if(array[i]  != 0){
            array[var] = array[i];
            var++;
        }
        
    }
    for(int i = var; i < sizeArray; i++){
       array[var] = 0;
       var++;
    }

    for(int i = 0; i < sizeArray; i++){
        cout<<array[i]<<" ";
    }
    
    return 0;
   
}
