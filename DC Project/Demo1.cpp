//Simple inetrest calculator
#include <iostream>
using namespace std;

int main(){

    int P, R, T, SI;

    cout<<"Enter Principal amount :";
    cin>>P;
    cout<<"Enter Rate of interest :";
    cin>>R;
    cout<<"Enter Time :";
    cin>>T;

    SI = (P*R*T)/100;

    cout<< "Simple Interest = " <<  SI  << endl;

    return 0;
}