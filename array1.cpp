#include <iostream>
using namespace std; 

int main () {
    int number;
    cout<<"enter a number : ";
    cin >>number;
    int arr[number];
    cout<<"enter elements ";
    for (int i=0;i<number;i++) {
        cin>>arr[i];
    }
    cout<<"array elements : ";
    for (int i=0 ;i<number;i++) {
        cout<<arr[i]<<" , ";
    }
return 0;
} 
