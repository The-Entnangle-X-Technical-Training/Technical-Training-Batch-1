// UPPERCASE  OR LOWERCASE

// VARIABLE = single alphabet chracter
// O1 = input alphabet
// O2 = character (A,B,C,D,E)
// o3 = IF input character is uppercase
// O4 = display uppercase
// O5 = else 
// O6 = display lowercase

#include <iostream>
using namespace std;
int main(){
    char ch;
    
    cout<<"enter the character";
    cin>>ch;

if (ch<='A'&& ch<='Z')
    {
    cout<<"uppercase";
    }

else{
    cout<<"lowercase";
    }
         
return 0;


}