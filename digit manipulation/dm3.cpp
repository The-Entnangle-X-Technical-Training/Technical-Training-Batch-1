// extract  first  digit of third number

#include<iostream>
using namespace std;
int main(){

    int number = 0 ;
    int firstdigit = 0;

    cout<<"enter the number:";
    cin>>number;

    firstdigit = number%100;
    cout<<"lastdigit:"<<firstdigit;

    return 0 ;
}

    
