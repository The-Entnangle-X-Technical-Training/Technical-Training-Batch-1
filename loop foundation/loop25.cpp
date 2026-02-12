// power calculator

#include <iostream>
using namespace std;
int main() {

    int i = 1;
    int base = 0;
    int exponent = 0 ;
    int result = 1 ;
    
    cout<<"enter base:";
    cin>>base;

    cout<<"eneter exponent:";
    cin>>exponent;

    while(i<=exponent){
       result=result*base;
       i++;
    }  
    cout<<"power"<<result;
        
    return 0;
}