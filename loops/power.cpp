//creating power calculator
#include <iostream>
using namespace std;    
int main(){
    int base,exponent;
    cout<<"enter the base number "<<endl;
    cin>>base;
    cout<<"enter the exponent "<<endl;
    cin>>exponent;
    int result=1;
    for (int i=1;i<=exponent;i++){
        result=result*base;
    }
     cout<<base<<" raised to the power "<<exponent<<" is "<<result<<endl;
}