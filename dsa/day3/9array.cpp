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
    int newnumber;
    cout<<"enter the newnumber:";
    cin>>newnumber;
    int position= -1;
    
    for(int i=0;i<=number;i++){
       if(arr[i]==newnumber){
        position=i;
       }
    }
     cout<<position<<endl;
    
    return 0;}