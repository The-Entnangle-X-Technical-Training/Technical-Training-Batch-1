#include<iostream>
using namespace std;

int main(){
    int N;
    bool prime = true;

    cout<<"enter N ";
    cin>>N;

    if(N <= 1){
       cout<<"Not prime";
       return 0; 
    }

    for(int i=2; i<N-1; i++){
        if(N % i == 0){
            prime = false;
            break;
        }
    }

    if(prime == true){
        cout<<"prime";
    }
    else{
        cout<<"Not prime";
    }

    return 0;
}