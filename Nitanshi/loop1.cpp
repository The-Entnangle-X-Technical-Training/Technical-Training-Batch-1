#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"enter a number ";
    cin>>n;
    //while
     int i=1;
   while(i<=n){
    cout<<i<<" "<<endl;
    i++;
   }
 //for
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    return 0;
 }