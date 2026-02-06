// Write a program that takes a number N and counts how many prime numbers exist from 1 to N.


#include <iostream>
using namespace std;

int main(){

   int firstValue=0;
    int isPrime=1;
    int count=0;

   cout<<"enter a number";
   cin>>firstValue;

   for(int i=1;i<=firstValue;i++){

    for(int j=2;j<=i-1;j++){

        if(i%j==0){
            isPrime=0;
            break;
        }

    }
    if(isPrime==1){
       count++;
    }
    isPrime=1;


}
cout<<"total prime number is : - "<<count<<endl;
}