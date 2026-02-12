#include<iostream>
using namespace std;

int main(){
    int N;
    int sum = 0;


    cout<<"enter N ";
    cin>>N;

    for(int i=1; i<N; i++){
        if(N % i == 0)
           sum += i;
    }
    if(sum == N){
        cout<<"perfect no.";
    }
    else{
        cout<<"not perfect no."; 
    }
    
    return 0;
}