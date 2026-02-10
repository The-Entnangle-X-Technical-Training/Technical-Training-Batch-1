#include<iostream>
using namespace std;

int main(){

    int arraySize = 0;
    int array[arraySize] = {};
    bool isDuplicate = false;
    int counter = 0;

    cout<<"Enter the length of the array : ";
    cin>>arraySize;
    
    for(int i = 0; i < arraySize; i++){
        cout<<"Enter element "<<i+1<<" of the array : ";
        cin>>array[i];
    }
    for(int i = 0; i < arraySize; i++){

        for(int j = 0; j < arraySize; j++){
        
            if(array[i]==array[j]){
        
                while(i != j){
                    isDuplicate = true;
                }
            }
            }
            
        if(isDuplicate){
            counter++;
        }
    }
    cout<<"Count of Distinct elements : "<<arraySize - counter;
    // if(isDuplicate){
    //     cout<<"Yes, duplicate elements exists";
    // }
    // else{
    //     cout<<"No, duplicate elements doesn't exist";
    // }

    return 0;

}