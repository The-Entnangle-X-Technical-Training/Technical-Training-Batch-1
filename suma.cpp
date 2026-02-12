#include <iostream>
using namespace std; 

int main () {
    int number,addition = 0;
    cout<<"enter a number : ";
    cin >>number;
    int arr[number];

    cout<<"enter elements ";
    for (int i=0;i<number;i++) {
        cin>>arr[i];
        addition=addition + arr[i];
    }
    
    cout<<" sum of array elements : "<<addition;
return 0;
} 
