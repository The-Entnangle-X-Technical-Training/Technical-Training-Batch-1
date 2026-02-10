// variable = numberOne,numberTwo,numberThree,addition,average
// O1 = input numberOne , numberTwo ,numberThree
// O2 = addition numberOne + NumberTwo + numberThree
// O3 = average = numberOne + NumberTwo + numberThree / 3
// O4 = display addition and average


#include <iostream>
using namespace std;
int main(){
    int numberOne=0;
    int numberTwo=0;
    int numberThree=0; int addition=0 , average=0;
     
    cout<<"enter numberOne:";
    cin>>numberOne;

    cout<<"enter numberTwo:";
    cin>>numberTwo;

    cout<<"enter numberThree:";
    cin>>numberThree;

    addition=numberOne + numberTwo + numberThree;
    average=addition/3;

    cout<<"addition"<<addition <<endl;
    cout<<"average is"<<average<<endl;

    return 0;

}

