#include<iostream>
using namespace std;

int main(){

    int arraySize = 0;
    bool isDist = true;
    int counter = 0;

    cout<<"Enter the length of the array : ";
    cin>>arraySize;
    int array[arraySize]={};

    for(int i = 0; i < arraySize; i++){
        cout<<"Enter element "<<i+1<<" of the array : ";
        cin>>array[i];
    }
    for(int i = 0; i < arraySize; i++){
      isDist = true;

        for(int j = i+1; j < arraySize; j++){
        
            if(array[i]==array[j]){
              // cout<<array[i];
               isDist = false;
                break;
            }
             
        }
            
        if(isDist){
            counter++;
            cout<<array[i]<<" ";
        }
    }
    cout<<"Number of Distinct Numberrs : "<<counter;

    return 0;

}