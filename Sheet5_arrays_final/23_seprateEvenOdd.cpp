// Separate Even and Odd Elements
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
        
        if(array[i] % 2 == 0){
            int temp = array[var];
            array[var] = array[i];
            array[i] = temp;
            var++;
        }
        
    }

    for(int i = 0; i < sizeArray; i++){
       cout<<array[i]<<" ";
    }
    
    return 0;
   
}
