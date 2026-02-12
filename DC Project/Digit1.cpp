//Extract last digit

#include <iostream>
using namespace std;

int main(){

    int numberOne , lastDigit;
    cout<<"Enter a number "<<endl;
    cin>>numberOne;

    lastDigit = numberOne % 10;
    cout<<lastDigit;


    return 0;
}