//largest digit in a number

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

    int largest = digit1;

    if ( digit2 > largest )
    largest = digit2;
     if ( digit3 > largest )
    largest = digit3;
     if ( digit4 > largest )
    largest = digit4;

    cout<<" largest digit= "<<largest<<endl;

    return 0;

}