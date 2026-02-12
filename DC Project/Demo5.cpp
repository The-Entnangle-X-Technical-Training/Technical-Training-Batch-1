//Swap two number using third variable

#include<iostream>
using namespace std;
int main(){

    int numberOne, numberTwo, temp;

    cout<<"Enter numberOne: ";
    cin>>numberOne;

    cout<<"Enter numberTwo: ";
    cin>>numberTwo;

    cout<< " \nBefore swapping: " << endl;
    cout<< "numberOne = " << numberOne << " numberTwo = " << numberTwo<< endl;

    temp = numberOne;
    numberOne = numberTwo;
    numberTwo = temp;

    cout<< " \nAfter swapping: " << endl;
    cout<< "numberOne = " << numberOne << " numberTwo = " << numberTwo<< endl;

    return 0;
}