#include<iostream>
using namespace std;

int main(){
    int N;
    int sum = 0;

    cout<<"enter N ";
    cin>>N;

    for(int i=1; i<N; i++){
        if(N % i == 0)
          sum = sum + i;
    }
    cout<<sum;

    return 0;
}