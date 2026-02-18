//Problem 15: Check Vowel or Consonant

#include<iostream>
using namespace std;

int main(){

    char alphabet;
    cout<<"Alphabet:";
    cin>>alphabet;

    if(alphabet=='a'|| alphabet=='e'|| alphabet=='i'|| alphabet=='o'|| alphabet=='u'){
        cout<<"vowel";
    }
    else{
        cout<<"consonant";
    }
}