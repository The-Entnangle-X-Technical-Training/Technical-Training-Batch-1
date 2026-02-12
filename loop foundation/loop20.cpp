// count digits in a number

# include<iostream>
using namespace std;
int main(){

    int i = 1 ; 
    int count =0;
    int n = 0;

    cout<<"enter n:";
    cin>>n;

       while (i<=n){
        n=n/10;
       count++;
       }   
       cout<<"number of digits:"<<count;


   return 0;
 
}