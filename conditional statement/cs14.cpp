//  SMALLEST OF THREE NUMBER

// Varible = numberOne , numberTwo , numberThree
// O1 = numberOne , numberTwo , numberThree
// O2 = if (numberOne < numberTwo && numberOne < numberThree)
// O3 = display numberOne is smallest 
// O4 = if(numberTwo < numberOne && numberTwo < numberThree)
// O5 = display numberTwo is smallest
// O6 = else
// O7 = display numberThree is smallest


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

if(numberOne < numberTwo && numberOne < numberThree){
    cout<<"numberOne is smallest";
    }

if(numberTwo < numberOne && numberTwo < numberThree){
    cout<<"numberTwo is smallest";
    }    

else{
    cout<<"numberThree is smallest";
    }
return 0;
}