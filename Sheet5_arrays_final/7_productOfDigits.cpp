#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;

    cout<<"Enter the number of elements in the array :";
    cin>> inputNumber;

    int arr[inputNumber] = {};

    for(int i = 0; i < inputNumber; i++){
        cout<<"Enter element "<<i<<" of array :";
        cin>>arr[i];
    }
    
    int product = 1;
    for(int i = 0; i< inputNumber; i++){
        product = product * arr[i];
    }

    cout<<"Product of Array : "<< product;

    return 0;

    
}