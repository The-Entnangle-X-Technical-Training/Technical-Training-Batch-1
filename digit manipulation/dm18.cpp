// check if digits are in ascending Order

# include <iostream>
using namespace std;
int main(){

    int number = 0 ;
    int digit1 = 0 ;
    int digit2 = 0 ;
    int digit3 = 0 ;
    

    cout<<"enter a number:";
    cin>>number;

    digit1=number/100;
    digit2=number/10%10;
    digit3=number%10;

    if (digit1 > digit2  && digit1 < digit3 || digit2 > digit1 && digit2 < digit3 || digit3 > digit1 && digit3 < digit2){
        cout<<"ascending order:";

    }

    else{
        cout<<"decending order:";
    }

    return 0 ;
}