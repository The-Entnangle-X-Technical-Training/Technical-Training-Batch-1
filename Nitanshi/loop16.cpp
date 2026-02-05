#include<iostream>
using namespace std;

int main(){

int N, digit;
int product = 1;

cout<<"enter N ";
    cin>>N;
 
  while(N > 0){
     digit = N % 10;
     product = product * digit; 
     N = N / 10;
   }
   
   cout<<product;

    return 0;
}