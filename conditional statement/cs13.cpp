// GREATER OF THREE NUMBER

// Varible = numberOne , numberTwo , numberThree
// O1 = input numberOne , numberTwo , numberThree
// O2 = if(numberOne > numberTwo && numberOne > numberThree)
// O3 = display numberOne is greater
// O4 = if(numberTwo > numberOne && numberTwo > numberThree)
// O5 = display numberTwo is greater
// O6 = else
// O7 = display numberTree is greater



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