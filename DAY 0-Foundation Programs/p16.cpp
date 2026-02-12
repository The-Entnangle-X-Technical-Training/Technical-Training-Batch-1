//uppercase or lowercase
#include<iostream>
using namespace std;

int main(){

    char character;

    cout<<"Character:";
    cin>>character;

    if(( character>='A' && character<='Z')){
        cout<<"Uppercase";
    }
    if(( character>='a' && character<='z')){
        cout<<"Lowercase";
    }
}