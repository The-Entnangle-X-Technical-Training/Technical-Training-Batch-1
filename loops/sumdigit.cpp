//calculating the sum of digits of a number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
     cout<<"the sum of digits in the number is :"<<sum<<endl;
    }