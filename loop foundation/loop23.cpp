// check if it is prime number

# include <iostream>
using namespace std;
int main(){

    int i = 1;
    int N = 0 ;
         
    cout<<"enter a N:";
    cin>> N ;

        while(i<=N){
           if (N=N%2){
            cout<<"prime";
           }
           else{
            cout<<"not prime";
           }
           i++;
        }
    return 0;
}
