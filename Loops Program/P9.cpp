// Sum of First N Natural numbers

#include<iostream>
using namespace std;

int main(){

    int N;
    cout<<"Enter a N:";
    cin>>N;

    int i=1,sum=0;
    while(i<=N){
        sum = sum+i;
        i++;
    }
    cout<<"sum:"<<sum;
return 0;
}