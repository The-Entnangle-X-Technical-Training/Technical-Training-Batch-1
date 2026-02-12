// Count Even Numbers from 1 to N

#include<iostream>
using namespace std;

int main(){

    int N;
    int count=0;
    int i=1;


    cout<<"N=";
    cin>>N;

    while(i<=N){
        if(i%2==0){
            count++;
        }
        i++;
    }
    cout<<count;
}
