#include <iostream>
using namespace std; 

int main () {
    int number,key;
    cout<<"enter a number : ";
    cin >>number;
    int arr[number];

    cout<<"enter elements : ";
    for (int i=0;i<number;i++) {
        cin>>arr[i];
    }
    cout<<"enter element to search : ";
    cin>>key;
    int position = -1;
    for (int i=0;i<=number-1;i++){
        if (arr[i] == key)
        position = arr[i]; 
        break;
    }
    
    cout<<" position of array : "<<position;
return 0;
} 
