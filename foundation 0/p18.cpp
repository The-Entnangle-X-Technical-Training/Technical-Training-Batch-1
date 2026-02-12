#include <iostream>
using namespace std;
int main(){
    int numberOne,numberTwo,numberThree;

    cout<<"enter the numberOne";
    cin>>numberOne;

    cout<<"enter the numberTwo";
    cin>>numberTwo;

    cout<<"enter the numberThree";
    cin>>numberThree;

if(numberOne > numberTwo && numberOne > numberThree){
    cout<<"numberOne is greater";
    }

if(numberTwo > numberOne && numberTwo > numberThree){
        cout<<"numberTwo greater";
    }    

else{
        cout<<"numberThree greater";
    }
         
return 0;


}