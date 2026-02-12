#include<iostream>
using namespace std;
int main(){
    int number=0;

    cout<<"entre the number";
    cin>>number;

    int arr[number]={};
    for(int i=1;i<=number;i++){
        cout<<"entre array: "<<i<<":";
        cin>>arr[i];}
    int max=arr[0];
    int min=arr[0];
    
    for(int i=0;i<=number;i++){
        if(arr[i]>max){
            max=arr[i];
        }
       else if (arr[i]<min){
         min=arr[i];
        }
    }
     cout<<max<<endl;
     cout<<min<<endl;
    
    return 0;}