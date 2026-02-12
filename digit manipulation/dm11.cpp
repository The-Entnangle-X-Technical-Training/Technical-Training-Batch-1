// check if last digit is even


#include<iostream>
using namespace std;
int main(){

    int digit = 0 ;
    int number = 0 ;
    

    cout<<"enter the number:";
    cin>>number;

    digit=number%2==0;

    if(number%2==0){
        cout<<"even number:";
    
    }
    else{
        cout<<"odd number:";
    }
    
    return 0 ;
}
