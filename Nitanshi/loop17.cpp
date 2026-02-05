#include<iostream>
using namespace std;

int main(){

int N, digit,temp;
int rev = 0;

cout<<"enter N ";
    cin>>N;
 
    temp = N;
    
  while(N > 0){
     digit = N % 10;
     rev = rev * 10 + digit; 
     N = N / 10;
   }
   if(rev == temp){
   cout<<"palindrome";
   }
   else{
    cout<<"not palindrome";
   }

    return 0;
}