// VOWEL OR CONSONENT

// variable = character , vowel 
// O1 = input character
// O2 = [a ,e , i ,o,u,A,E,I,O,U]
// o3 = if input character is in vowel
// O4 = display vowel
// O5 = else 
// O6 = display constant

#include <iostream>
using namespace std;
int main(){

char ch;

cout<<"enter the character:";
cin>>ch;

if (ch=='a'|| ch=='e',ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    cout<<"charater is vowel";
}

else{
    cout<<" character is consonant";
}

return 0;

}