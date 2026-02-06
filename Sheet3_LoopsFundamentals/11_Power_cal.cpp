#include<iostream>
using namespace std;

int main(){
    int baseNumber = 0;
    int exponent = 0;
    int result = 1;

    cout<<"Enter a base number : ";
    cin>>baseNumber;

    cout<<"Enter the exponent power : ";
    cin>>exponent;

    if(exponent == 0){
        cout<<"Power : "<< 1;
    }

    else if(exponent<0){
        cout<<"Please enter positive power TT"<<endl;
    }
    
    else{

    for(int i = 1; i<= exponent; i++){
        result = result * baseNumber;
    }
    cout<<"Power : "<<result<<endl;

    int i = 1;
    result = 1;

    while(i<= exponent){
        result = result * baseNumber;
        i++;
    }
    cout<<"Power  : "<<result<<endl;
    }
    return 0;


}