// GRADE CALCULATOR


#include <iostream>
using namespace std;
int main(){

    
    int mark = 0 ;

    cout<<"enter the mark";
    cin>>mark;

    

    if (90<=mark && mark<=100){
         cout<<"A:";
    }

    else if(80<=mark && mark<=89){
        cout<<"B:";
    }

    else if(70<=mark && mark<=79){
        cout<<"C:";
    }

    else if(60<=mark && mark<=69){
        cout<<"D:";
    }

    else if(40<=mark && mark<=59){
        cout<<"E:";
    }
    else {
        (0>=mark && mark>=39);
        cout<<"F:";
    }

    
    return 0;


}