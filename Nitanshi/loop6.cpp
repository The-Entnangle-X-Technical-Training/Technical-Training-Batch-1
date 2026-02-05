#include<iostream>
using namespace std;

int main(){

int N;
int M;
int count = 0;

cout<<"enter N ";
    cin>>N;

cout<<"enter M ";
    cin>>M;  
 
for(int i=1; i<=N; i++){
    if(i % M == 0)
        count++;       
} 
  cout<<count;  
    return 0;
}