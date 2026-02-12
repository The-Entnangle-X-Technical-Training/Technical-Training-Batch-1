#include<iostream>
using namespace std;
int main(){
    int number=0;

    cout<<"entre the number:";
    cin>>number;
    int even;
    int odd;
    int arr[number]={};
    for(int i=1;i<=number;i++){
        cout<<"entre array:"<<i;
        cin>>arr[i];}

     for(int i=1;i<=number;i++){
     if(arr[i]%2==0){
        even++;
    }    
    else{
        odd++;
    }
    cout<<"even number :"<< even<<" "<<endl;
    cout<<"even number :"<< odd<<" "<<endl;
    
    
    }

return 0;}