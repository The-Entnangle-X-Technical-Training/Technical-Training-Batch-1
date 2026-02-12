#include<iostream>
using namespace std;


int main(){
    int inputNumber = 0;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    cout<<"Enter the number of elements in the array :";
    cin>> inputNumber;

    int arr[inputNumber] = {};

    for(int i = 0; i < inputNumber; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arr[i];
        
        if(arr[i] >0){
            positive ++;    
        }
        else if(arr[i] < 0){
            negative ++;
        }  
        else{
            zero ++;
        }
    }
    cout<<"Number of positive digits : "<<positive<<endl;
    cout<<"Number of negative digits : "<<negative<<endl;
    cout<<"Number of zeros :"<<zero<<endl;
    
    return 0;

    
}