#include<iostream>
using namespace std;

int main(){

int N, digit;
int evenCount = 0;
int oddCount = 0;

cout<<"enter N ";
    cin>>N;
  
  if(n == 0)
  evenCount = 1;
 
  while(N > 0){
    digit = N % 10;
    if(digit % 2 == 0){
      evenCount++;    
    }
    else{
        oddCount++;
    }
    N = N / 10;
   }
   cout<<evenCount<<endl;
   cout<oddCount;

    return 0;
}