// Write a program that takes a number N as input and prints all numbers from 1 to N
/*
Algorithm: (V)  - N
           (O1) - Take input N 
           (O2) - Loop : for(N; N>=1; N--)    OR   while(N>=1){
                           {                           cout<<N<<" ";}
                            cout<<N<<" ";              N--;
                           }                       } 
           (O3) - Display
*/
#include<iostream>
using namespace std;

int main()
{
    int N;
    
    cout<<"Enter the value of N : ";
    cin>>N;

    for(N; N>=1; N--)
    {
        cout<<N<<" ";
    }

    return 0;
}