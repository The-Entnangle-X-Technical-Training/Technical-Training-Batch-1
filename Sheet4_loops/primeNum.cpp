#include<iostream>
using namespace std;

int main(){
    int num = 0;
    bool isPrime = true;

    cout<<"Enter a number : ";
    cin>>num;

    if(num >0){

    for(int i=2; i<num; i++){
        if(num % i == 0){
           isPrime = false;
        break;
    }
    }
    if(isPrime == true){
        cout<<num<<" is a prime number.";
    }
    else{
        cout<<"Not a prime number.";
    }
}

}