// palindrome number checker (3 digit)


#include<iostream>
using namespace std;
int main(){

    int number = 0 ;
    int lastnumber= 0 ;
    int firstnumber = 0 ;
    
    cout<<"enter the number:";
    cin>>number;

    lastnumber = number%10;
    firstnumber = number/100;
   
    if(lastnumber==firstnumber){
        cout<<"number is palindrome:";

    }
    else{
        cout<<"number is not palindrome:";
    }
    return 0 ;
}
