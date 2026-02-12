//Print first N odd number 

#include<iostream>
using namespace std;
int main(){

    int number;
    cout<<" Enter a number: "<<endl;
    cin>>number;


    for(int i= 1; i<=number; i++){

        cout<<i*2-1<<" ";
    }
    return 0;
}