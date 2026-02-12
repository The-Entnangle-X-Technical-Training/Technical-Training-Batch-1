// Alphabet, Digit, or Special Character

#include<iostream>
using namespace std;

int main(){
    char character;
    
    cout<<"Character:";
    cin>>character;

    if(( character>='a' && character<='z') ||( character>='A' && character<='Z')){
        cout<<"Alphabet";
    }
   else if (character>='0'&& character<='9'){
        cout<<"Digit";
    }
    else{
        cout<<"special Character";
    }
}