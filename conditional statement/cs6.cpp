// ALPHABET , DIGIT , OR SPEACIAL CHARACTER

// VARIABLE = inputcharacter , alaphabet ,digit
// O1 = input character
// O2 = character = (a ,b ,c, d, ------- ,x ,y,z)
// O3 = digit = (0 --------- 9)
// O4 = if input character is in alphabet
// O5 = display alphabet
// O6 = if else digit is in digit
// O6 = display digit
// O7 = else
// O8 = display special character




#include <iostream>
using namespace std;
int main(){

    char ch;
    int digit;

    cout<<"enter the character";
    cin>>ch;

    

    if ((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        cout<<"alphabet";
    }

    else if(ch>='0' && ch<='0'){
        cout<<"digit";
    }

    else{
        cout<<"special character";
    }
         
return 0;


}