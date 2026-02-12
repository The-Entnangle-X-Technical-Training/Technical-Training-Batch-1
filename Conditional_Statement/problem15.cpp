// check vowel or consonant :
#include<iostream>
using namespace std;

int main(){
    char Alphabet = 0;

    cout<<"Enter Single Alphabet :";
    cin>>Alphabet;

    if(Alphabet == 'A' || Alphabet == 'E' || Alphabet == 'I' || Alphabet == 'O' 
        || Alphabet == 'U' || Alphabet == 'a' || Alphabet == 'e' || Alphabet == 'i' || Alphabet == 'o'
        || Alphabet == 'u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
    return 0;
}