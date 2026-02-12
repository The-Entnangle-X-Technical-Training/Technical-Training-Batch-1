#include<iostream>
using namespace std;
 
int main(){
    int N;
    int first = 0, second = 1, next;

    cout<<"enter N ";
    cin>>N;

    if(N == 1){
         cout<<"0";
    }

    if(N == 2){
        cout<<"1";
    }

    for(int i=3; i<=N; i++){
        next = first + second;
        first = second;
        second = next;
    }
    cout<<second;
    return 0;
}