#include<iostream>
using namespace std;

int main(){

   int inputNumber = 0;
   int iter = 1;

   cout<<"Enter a number :";
   cin>> inputNumber;

   for( int i=1; i<= inputNumber; i++){
    cout<<i<<endl;
   }

   while(iter <= inputNumber){
    cout<<iter<<endl;
    iter++;

   }

   return 0;



}