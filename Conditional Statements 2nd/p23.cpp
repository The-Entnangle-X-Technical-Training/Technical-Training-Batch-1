//Problem 23: Check if Number is Divisible by Both 2 and 3

#include<iostream>
using namespace std;

int main(){
    int number=0;
    cout<<"Number=";
    cin>>number;

    if(number%2==0 && number%3==0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
 return 0;   
}