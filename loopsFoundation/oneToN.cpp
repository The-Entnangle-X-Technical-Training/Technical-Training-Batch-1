// Write a program that takes a number N as input and prints all numbers from 1 to N
/*
Algorithm: (V)  - N
           (O1) - Take input N 
           (O2) - Loop : for(int i=1; i<=N; i++)    OR   while(i<=N){
                           {                                cout<<i<<" ";}
                            cout<<i<<" ";                   i++;
                           }                              }
           (O3) - Display
*/
#include<iostream>
using namespace std;

int main()
{
    int N;
    
    cout<<"Enter the value of N : ";
    cin>>N;

    for(int i=1; i<=N; i++)
    {
        cout<<i<<" ";
    }
}