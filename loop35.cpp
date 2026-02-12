#include<iostream>
using namespace std;

int main(){

    int a,d, n;
    cout<<"enter first term ";
    cin>>a;

    cout<<"enter difference ";
    cin>>d;

    cout<<"enter no.";
    cin>>n;
    
    int term = a;

    for(int i=1; i<=n; i++){
        cout<<term<<" ";
        term = term + d;
    }
    return 0;
}