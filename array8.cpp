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
    }
        int max= arr[0];
        int min= arr[0];
    for (int i=1;i<number;i++) {
        if (arr[i]>max)
        max =arr[i];
        if (arr[i] < min)
        min = arr[i];
    }   

        cout<<"max number : "<<max<<endl ;
        cout<<"min number : "<<min <<endl;

return 0;
} 