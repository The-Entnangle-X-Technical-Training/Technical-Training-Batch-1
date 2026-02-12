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
    int sum=0;
    int average;
    for(int i=1;i<=number;i++){
        sum=sum+arr[i];
        average=sum/number;
        
    } 
    cout<<sum<<endl;
    cout<<average;
    return 0;}