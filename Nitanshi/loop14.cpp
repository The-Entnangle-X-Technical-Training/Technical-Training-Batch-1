#include<iostream>
using namespace std;

int main(){

int N, digit;
int sum = 0;

cout<<"enter N ";
    cin>>N;
 
  while(N > 0){
     digit = N % 10;
     sum = sum + digit; 
     N = N / 10;
   }
   
   cout<<sum;

    return 0;
}