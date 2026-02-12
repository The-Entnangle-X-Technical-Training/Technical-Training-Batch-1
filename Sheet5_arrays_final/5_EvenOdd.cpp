#include<iostream>
using namespace std;


int main(){
    int inputNumber = 0;
    int even = 0;
    int odd = 0;

    cout<<"Enter the number of elements in the array :";
    cin>> inputNumber;

    int arr[inputNumber] = {};

    for(int i = 0; i < inputNumber; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arr[i];
        
        if(arr[i] % 2 == 0){
            even ++;    
        }
        else{
            odd ++;
        }  
    }
    cout<<"Number of even digits : "<<even<<endl;
    cout<<"Number of odd digits : "<<odd<<endl;
    
    return 0;

    
}