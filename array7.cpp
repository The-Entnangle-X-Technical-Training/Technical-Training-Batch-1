#include <iostream>
using namespace std; 

int main () {
    int number,product =1;
    cout<<"enter a number : ";
    cin >>number;
    int arr[number];

    cout<<"enter elements ";
    for (int i=0;i<number;i++) {
        cin>>arr[i];
        product=product * arr[i];
    }
    
    cout<<"product of array elements : "<<product;
return 0;
} 
