#include<iostream>
using namespace std;

int main() {

    string vowels;

    cout<<"Enter the vowels = ";
    cin>>vowels;

    if (vowels == "a" || vowels == "A" || vowels == "e" || vowels == "E" || vowels == "i" || vowels == "I" || vowels == "o" || vowels == "O" || vowels == "u" || vowels == "U") {
        cout<<"Vowel";
    }
    else {
        cout<<"Consonent";
    }

    
}