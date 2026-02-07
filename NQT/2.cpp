#include<iostream>
using  namespace std;

int main(){

    int num1 = 0;
    int num2 = 0;

    cout<<"Enter the divident : ";
    cin>>num1;
    cout<<"Enter the divisor : ";
    cin>>num2;

    if(1<= num1 && num2 <= 100000){
        if(num1 > num2){
            while(num1 % num2 != 0){
                num1--;
            }
            cout<<num1;
        }
        else{
            while(num1 % num2 != 0){
                num1++;
            }
            cout<<num1;
        }
    }
   else if(num1 < 1){
         cout<<"Enter divident greater than 1";
    }
    else if(num1 < 1 && num2 > 100000){
        cout<<"Inputs out of range";
    }
   else{
         cout<<"Enter divisor less than 100000 ";
    }
    return 0;
}