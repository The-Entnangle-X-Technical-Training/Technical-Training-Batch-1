#include<iostream>
using namespace std;
 
int main{

  int number, count = 0;
    cout<<"enter no.";
    cin>>n;

    if(number < 0)
        number = -number;
    
    if(number == 0)
        count = 1;
    
    while(number > 0){
        number = number/10;
        count++;
    }
    cout<<count;

    return 0;
}