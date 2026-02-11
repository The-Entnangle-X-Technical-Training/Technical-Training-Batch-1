//checking weather the char is vowel or consonent
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the char "<<endl;
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<"the char is vowel "<<endl;
    }
    else {
        cout<<"the char is consonent "<<endl;
        
    }
}