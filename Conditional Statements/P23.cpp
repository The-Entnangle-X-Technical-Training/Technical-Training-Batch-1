//Character Position in Alphabet (First or Second Half)

#include<iostream>
using namespace std;

int main(){
    char character;
    cout<<"character:";
    cin>>character;

    if(character>='A' && character<='M' || character>='a' && character<='m'){
        cout<<"first half(A-M or a-m) of alphabet";
    }
    else if(character>='N' && character<='Z' || character>='n' && character<='z'){
        cout<<"second half(N-Z or n-z) of alphabet"; 
    }
    else{
        cout<<"not an alphabet character";
    }
}

