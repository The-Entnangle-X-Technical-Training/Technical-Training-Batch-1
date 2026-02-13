//Rectangle Pattern with Stars

#include<iostream>
using namespace std;

int main(){

    int m=0;
    int n=0;

    cout<<"m=";
    cin>>m;

    cout<<"n=";
    cin>>n;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
        cout<<"*";
        }
    cout<<endl;
}
}
