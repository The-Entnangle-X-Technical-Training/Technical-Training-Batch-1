#include<iostream>
using namespace std;

int main(){

    int  n;
    double sum = 0.0;

    cout<<"enter no.";
    cin>>n;


    for(int i=1; i<=n; i++){
        sum += (1.0/i);
    }
    cout<<"sum of series "<<sum;
    return 0;
}