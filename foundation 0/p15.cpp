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