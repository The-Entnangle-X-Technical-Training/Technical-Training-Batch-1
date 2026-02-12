//Sum of Two Numbers

//(V)-numberOne, numberTwo,addition
//(O1)-input numberOne,numberTwo
//(O2)-addition= numberOne+numberTwo
//(O3)-display addition



#include <iostream>
using namespace std;

int main() {

    int numberOne=0;
    int numberTwo=0;
    int addition=0;

    cout<<"Enter numberOne:";
    cin>>numberOne;

    cout<<"Enter numberTwo:";
    cin>>numberTwo;

    addition=numberOne+numberTwo;
    cout<<"addition= "<< addition;

    return 0;
}