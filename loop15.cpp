#include<iostream>
using namespace std;

int main(){

int N, digit;
int rev = 0;

cout<<"enter N ";
    cin>>N;
 
  while(N > 0){
     digit = N % 10;
     rev = rev * 10 + digit; 
     N = N / 10;
   }
   
   cout<<rev;

    return 0;
}