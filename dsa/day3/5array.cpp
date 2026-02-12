#include<iostream>
using namespace std;
int main(){
    int number=0;

    cout<<"entre the number";
    cin>>number;

    int arr[number]={};
    for(int i=1;i<=number;i++){
        cout<<"entre array: "<<i<<" ";
        cin>>arr[i];}
    
    for(int i=1;i<=number;i++){
        if(arr[i]>0){
            cout<<"positive:";
        }
        else if(arr[i]<0){
            cout<<"negative:";
        }
        else{
            cout<<"zero:";
        }
    } 
    
    return 0;}