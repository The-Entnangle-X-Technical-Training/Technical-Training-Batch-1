#include<iostream>
using namespace std;
int main(){
    int n=10;
    int m=3;
    int count=0;
    int i=1;
    while(i<=n){
       if(i%m==0){
        count++;
       }
        
        i++;
    }
    cout<<count<<endl;
    return 0;
}