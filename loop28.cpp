#include<iostream>
using namespace std;
 
int main(){
    int N;
    int first = 0, second = 1, next;

    cout<<"enter N ";
    cin>>N;

    if(N >= 1){
         cout<<first<<" ";
    }

    if(N >= 2){
        cout<<second<<" ";
    }

    for(int i=3; i<=N; i++){
        next = first + second;
        cout<<next<<" ";
        first = second;
        second = next;
    }
    
    return 0;
}