#include<iostream>
using namespace std;
 
int main(){
    int N;
    int first = 0, second = 1, next;
    int sum = 0;

    cout<<"enter N ";
    cin>>N;

    if(N >= 1){
         sum += first;
    }

    if(N >= 2){
        sum += second;
    }

    for(int i=3; i<=N; i++){
        next = first + second;
        sum += next;
        first = second;
        second = next;    
    }
    cout<<"sum is "<<sum;
    
    return 0;
}