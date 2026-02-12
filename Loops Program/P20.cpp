//20: Count Digits in a Number
#include<iostream>
using namespace std;

int main(){

    int N;
    int count=0;
    cout<<"N:";
    cin>>N;

    
    int i=1;

    while(i<=N){
         N=N/10;
         count++;
    }
    cout<<"count:"<<count;    
return 0;
}