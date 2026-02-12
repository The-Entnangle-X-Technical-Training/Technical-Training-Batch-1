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
    int count =0 ;
    for (int i=0;i<=number-1;i++){
        if (arr[i] == key)
        count ++;
    }
    
    cout<<" total count : "<<count;
return 0;
} 
