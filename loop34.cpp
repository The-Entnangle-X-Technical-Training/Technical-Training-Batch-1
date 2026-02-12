#include<iostream>
using namespace std;
 
int main(){
    int N;
    int first = 0, second = 1, next;

    cout<<"enter N ";
    cin>>N;

    if(N == 0 || N == 1){
         cout<<"fibonaci no.";
         return 0;
    }
    
    while(second < N){
        next = first + second;
        first = second;
        second = next;
    }

    if(second == N)
        cout<<"fibonaci no.";
    else
        cout<<"not fibonaci no."; 
    
    return 0;
}