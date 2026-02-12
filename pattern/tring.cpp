//creating right tringle with star
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of sides of the tringle "<<endl;
    cin>>n; 
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
       //for(int j=1;j<=i;j++){
            cout<<"* ";
        }   
    cout<<endl;
}}
