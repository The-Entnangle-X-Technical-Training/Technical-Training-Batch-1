#include <iostream>
using namespace std;
int main(){

    
    int numberOne,numberTwo,numberThree;

    cout<<"enter numberOne:";
    cin>>numberOne;

    cout<<"enter numberTwo:";
    cin>>numberTwo;

    cout<<"enter numberThree:";
    cin>>numberThree;

    numberOne = numberOne + numberTwo + numberThree;
    numberTwo = numberOne - numberTwo - numberThree;
    numberThree = numberOne - numberTwo - numberThree;
    numberOne = numberOne - numberTwo - numberThree;


    
    cout<<"after swapping"<<endl;
    cout<<"numberOne"<<numberOne<<endl;
    cout<<"numberTwo"<<numberTwo<<endl;
    cout<<"numberThree"<<numberThree<<endl;
    

    return 0;

}




