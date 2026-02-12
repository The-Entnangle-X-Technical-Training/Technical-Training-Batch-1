// find largest number in three digit

# include <iostream>
using namespace std;
int main(){

    int number = 0 ;
    int digit1 = 0 ;
    int digit2 = 0 ;
    int digit3 = 0 ;
    int digit4 = 0 ;
    
    cout<<"enter 4 digit number:";
    cin>>number;

    digit4 = number %10;
    number = number / 10;

    digit3 = number %10;
    number = number /10;

    digit2 = number %10;
    number = number /10;

    digit1 = number %10;



    if(digit1 >= digit2 && digit1 >= digit3 && digit1 >= digit4){
        cout<<" digit1 is largest"<<digit1;
    }

    else if (digit2 >= digit1 && digit2 >= digit3 && digit2 >= digit4 ){
        cout<<" digit2 is largest"<<digit2;
    }
    
    else if (digit3 >= digit1 && digit3 >= digit2 && digit3 >= digit4 ){
        cout<<" digit3 is largest"<<digit3;
    }

    else{
        cout<<"digit4 is largest"<<digit4;
    }


  return 0 ;
}