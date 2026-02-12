#include<iostream>
using namespace std;

int main(){

    int a,d, n;
    int sum = 0;

    cout<<"enter first term ";
    cin>>a;

    cout<<"enter difference ";
    cin>>d;

    cout<<"enter no.";
    cin>>n;
    
    int term = a;

    for(int i=1; i<=n; i++){
        cout<<term<<" "<<endl;
        sum += term;
        term = term + d;
    }
    cout<<"sum of series "<<sum;
    return 0;
}