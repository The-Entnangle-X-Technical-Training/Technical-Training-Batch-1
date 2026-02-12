//Sum of Digits

#include<iostream>
using namespace std;

int main(){

    int N=0;
    int sum=0;
    int digit1=0;
    int digit2=0;

    
    

    cout<<"N=";
    cin>>N;

    int i=1;
    while(i<=N){
        digit2=N%10;
        digit1=N/10;
        sum=digit1+digit2;
        i++;
    }
    cout<<sum;
}