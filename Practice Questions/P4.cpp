//Sum and Average of Three Numbers

//Display Sum and Average of Three numbers

//(V)-numberOne,numberTwo, numberThree, addition,average
//(O1)- Input numberOne,numberTwo, numberThree
//(O2)- addition = numberOne + numberTwo + numberThree
//(O3)- average = addition /3
//(O4)- display sum and average


#include<iostream>
using namespace std;

int main(){
    int numberOne=0;
    int numberTwo=0;
    int numberThree=0;
    int addition=0;
    int average=0;

    cout<<"Enter Number1:";
    cin>>numberOne;

    cout<<"Enter Number2:";
    cin>>numberTwo;

    cout<<"Enter Number3:";
    cin>>numberThree;

    addition = numberOne + numberTwo + numberThree;
    average = addition/3;

    cout<<"Sum is: "<<addition<<endl;
    cout<<"Average is:"<<average<<endl;

    return 0;
}
