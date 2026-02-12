//check if number is zero :

#include<iostream>
using namespace std;

int main(){

    int Age = 0;

    cout<<"Enter Age :";
    cin>>Age;

    if(Age>=18){
        cout<<"Adult";
    }
    else{
        cout<<"Minor";
    }
    
    return 0;
}