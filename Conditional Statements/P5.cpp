// vowels or consonant

#include<iostream>
using namespace std;

int main(){
    char Character;
    
    cout<<"Enter a Character:";
    cin>>Character;

    if(Character=='a'||Character=='e'||Character=='i'||Character=='o'||Character=='u'||
        Character=='A'||Character=='E'||Character=='I'||Character=='O'||Character=='U'){
        cout<<"Character is vowels."<<endl;
    }
    else{
        cout<<"It is consonant."<<endl;
    }
}
