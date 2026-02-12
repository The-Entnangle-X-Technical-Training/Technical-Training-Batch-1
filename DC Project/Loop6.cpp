//First N even number

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<" Enter the value: "<<endl;
    cin>>number;

    for(int i= 1; i<=number; i++){

        cout<<i*2<<" ";
    }
    return 0;
}