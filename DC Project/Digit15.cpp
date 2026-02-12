//smallest digit in a number

#include<iostream>
using namespace std;
int main(){

    int numberOne;

    cout<<"Enter a number: ";
    cin>>numberOne;

    int digit1 = numberOne / 1000;
    int digit2 = (numberOne / 100) % 10;
    int digit3 = (numberOne / 10) % 10;
    int digit4 = numberOne % 10;

    int smallest = digit1;

    if ( digit2 < smallest)
    smallest = digit2;
     if ( digit3 < smallest )
    smallest = digit3;
     if ( digit4 < smallest )
    smallest = digit4;

    cout<<" smallest digit= "<<smallest<<endl;

    return 0;

}