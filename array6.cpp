#include <iostream>
using namespace std; 

int main () {
    int number,positive =0, negative=0,zero=0;
    cout<<"enter a number : ";
    cin >>number;
    int arr[number];

    cout<<"enter elements ";
    for (int i=0;i<number;i++) {
        cin>>arr[i];
        if (arr[i] > 0) 
            positive++;
        else if (arr[i] < 0)
            negative++;
        else 
            zero++;
    }
    cout<<"positive number "<<positive<<endl;
    cout << "negative number "<<negative<<endl;
    cout << "zero number "<<zero<<endl;    
return 0;
} 