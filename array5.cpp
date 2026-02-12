#include <iostream>
using namespace std; 

int main () {
    int number,even=0,odd=0;
    cout<<"enter a number : ";
    cin >>number;
    int arr[number];

    cout<<"enter elements ";
    for (int i=0;i<number;i++) {
        cin>>arr[i];
        if (arr[i] % 2 == 0) 
            even++;
        else
            odd++;
    }
        cout<<"even number : "<<even<<endl ;
        cout<<"odd number : "<<odd <<endl;

return 0;
} 