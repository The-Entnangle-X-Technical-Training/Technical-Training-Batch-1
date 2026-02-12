//Print first N Odd numbers
#include<iostream>
using namespace std;

int main(){

    int N;
    cout<<"Enter N:";
    cin>>N;

    int i=1;
    
    while(i<=N){
        cout<<2*i-1<<" ";
        i++;

    }
return 0;
}