#include<iostream>
using namespace std;

int main(){

int base;
int expo;
int res = 1;

cout<<"enter base ";
    cin>>base;

cout<<"enter exponent ";
    cin>>expo;    
 
  for(int i=1; i<=expo; i++){
     res = res * base;    
   }
   
   cout<<res;

    return 0;
}