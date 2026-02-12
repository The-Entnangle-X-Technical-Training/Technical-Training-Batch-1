//22: Reverse a Number

#include<iostream>
using namespace std;

int main(){

    int N=0;
    int reverse=0;
    int remainder;

    cout<<"N:";
    cin>>N;


    while(N!=0){
        remainder=N%10;
        reverse=reverse*10+remainder;
        N=N/10;
    
    }
    cout<<reverse;
}
