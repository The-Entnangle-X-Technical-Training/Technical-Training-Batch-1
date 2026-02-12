//23: Check if Prime Number

#include<iostream>
using namespace std;

int main(){

    int N=0;
    cout<<"N=";
    cin>>N;

    int i=1;
    while(i<=N){
        if (N=N%2){
            cout<<"prime";
        i++;
        }
        else{
           cout<<" not Prime";
        }
    
    }
    
}