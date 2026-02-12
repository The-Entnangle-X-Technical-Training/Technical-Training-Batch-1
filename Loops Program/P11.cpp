// Print Multiplication Table of N
#include<iostream>
using namespace std;

int main(){

    int N;
    cout<<"N=";
    cin>>N;

    int i=1;
    while(i<=10){
        cout<<N<<"x"<<i<<"="<<N*i<<endl;
        i++;
    }
return 0;
}
