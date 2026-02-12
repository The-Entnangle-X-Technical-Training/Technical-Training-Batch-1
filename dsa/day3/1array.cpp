#include<iostream>
using namespace std;
int main(){
    int number=0;

    cout<<"entre the number";
    cin>>number;

    int arr[number]={};
    for(int i=1;i<=number;i++){
        cout<<"entre array"<<i;
        cin>>arr[i];}
    for(int i=1;i<=number;i++){
        cout<<arr[i]<<" ";
    }

return 0;}