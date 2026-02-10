// SWAP TWO NUMBER WITHOUT USING THIRD VARIABLE

// VARIABLE = numberOne , numberTwo 
// O1 = input , numberOne , numberTwo
// O1 = swap number no1 = no1 + no2
                // no2 = no1 - no2
                // no1 = no1 - no2
// O3 =display number after swaping
                
#include <iostream>
using namespace std;
int main(){

    
    int numberOne,numberTwo;

    cout<<"enter numberOne:";
    cin>>numberOne;

    cout<<"enter numberTwo:";
    cin>>numberTwo;

    numberOne = numberOne + numberTwo ;
    numberTwo = numberOne - numberTwo ;
    numberOne = numberOne - numberTwo ;


    cout<<"after swapping"<<endl;
    cout<<"numberOne"<<numberOne<<endl;
    cout<<"numberTwo"<<numberTwo<<endl;
    
    return 0;

}




