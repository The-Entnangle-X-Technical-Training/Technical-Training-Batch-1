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
    
    int max = 0;
    int min = arr[1];
    for(int i =0; i < inputNumber; i++){
        if(arr[i]> max){
            max = arr[i];
        }
        if(min> arr[i]){
            min = arr[i];
        }
    }

    cout<<"Minimum of Array : "<< min<<endl;
    cout<<"Maximum of Array : "<<max<<endl;


    return 0;

    
}