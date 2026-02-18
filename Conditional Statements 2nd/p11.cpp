//Problem 11: Check if Number is Between 1 and 10
#include<iostream>
using namespace std;

int main(){
    int number=0;
    cout<<"number=";
    cin>>number;

    if(number>=1 && number<=10){
        cout<<"Yes(between 1-10)";
    }
    else{
        cout<<"No";
    }
return 0;
}