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




