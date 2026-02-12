// reverse a number

#include <iostream>
using namespace std;
int main(){

    int N =0;

    cout<<"enter a number:";
    cin>>N;

    int i = 1;
    int reverse = 0;
    int lastdigit = 0;

    while(N!=0){
        lastdigit=N%10;
        reverse=reverse*10+lastdigit;
        N=N/10;
        
    }
        cout<<reverse;
        return 0;

}