// Problem 36: Strong Password Validator (Simple)
// Write a program that takes password length, count of uppercase letters, lowercase letters, and digits as
// separate inputs. Check if password is Strong (length≥8, has uppercase, lowercase, digits), Medium
// (length≥6, any 2 types), or Weak

#include <iostream>
using namespace std;

int main(){
    int PasswordLen = 0;
    int uppercaseLetter = 0;
    int LowercaseLetter = 0;
    int Digit =0 ;
    cout << " enter the password length : ";
    cin >> PasswordLen;
    cout <<" Enter the count of uppercase letter : ";
    cin >>uppercaseLetter;
    cout << "Enter the count of lowercase letter : ";
    cin >> LowercaseLetter;
    cout << " Enter the count of Digit : ";
    cin >> Digit;
    if(PasswordLen >=8 && uppercaseLetter >=1 && LowercaseLetter >=1 && Digit>=1){
        cout <<" password is Strong ";
    }else if(PasswordLen >=6){
        if(uppercaseLetter >=1 && LowercaseLetter >=1 ){
            cout <<" password is Medium ";
        }else if(uppercaseLetter >=1 && Digit >=1){
            cout <<" password is Medium ";
        }else if(LowercaseLetter>=1 && Digit >=1){
            cout <<" password is Medium ";
        }
    }else{
        cout <<" password is Weak ";
    }
    return 0;
}