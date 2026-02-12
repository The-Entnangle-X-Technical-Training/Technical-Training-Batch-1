#include<iostream>
using namespace std;
int main(){
    int number=0;

    cout<<"entre the number";
    cin>>number;

    int arr[number]={};
    for(int i=0;i<=number;i++){
        cout<<"entre array: "<<i<<":";
        cin>>arr[i];}
    // int newnumber;
    // cout<<"enter the newnumber:";
    //  cin>>newnumber;
    // int count=0;
    
    // for(int i=0;i<=number;i++){
    //    if(arr[i]==newnumber){
    //      count++;
    //    }
    // }
    //  cout<<count<<endl;
    int flag=0;
    for(int i=0;i<=number;i++){
        for(int j=i+1;j<number;j++){
            if(arr[i]==arr[j]){
                flag=1;

            }
        }
        if(flag==1){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }

    }
    
    return 0;}