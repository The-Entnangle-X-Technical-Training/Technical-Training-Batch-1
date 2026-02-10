// SWAPPING TWO NUMBER USING THE THIRD  VARIABLE

// variable = numberOne,numberTwo,temp
// O1 = input numberOne , numberTwo 
// O2 = swaping number
// temp=numberOne;
// numberOne=numberTwo;
// numberTwo=temp;
// O4 = display number after swaping



#include <iostream>
using namespace std;
int main(){

    
    int numberOne,numberTwo,temp;

    cout<<"enter numberOne:";
    cin>>numberOne;

    cout<<"enter numberTwo:";
    cin>>numberTwo;

   temp=numberOne;
   numberOne=numberTwo;
   numberTwo=temp;
    
    cout<<"after swapping"<<endl;
    cout<<"numberOne"<<numberOne<<endl;
    cout<<"numberTwo"<<numberTwo<<endl;
    

    return 0;

}




