// FAHRENHEIT TO CELSIUS CONVERTER

// Variable = fahrenheit , celsius
// O1 = input fahrenheit
// O2 = celcius C = (F - 32)*5/9
// O3 = display celsius

#include <iostream>
using namespace std;
int main(){

    
    int   fahrenheit  = 0 ;
    int  celsius = 0 ;

    cout<<" enter fahrenheit:";
    cin>>fahrenheit;
    
    
    celsius = (fahrenheit - 32)*5/9;
    
    cout<<"fahrenheit"<<fahrenheit<<endl;
    cout<<"celsius"<<celsius<<endl;

    return 0;

}