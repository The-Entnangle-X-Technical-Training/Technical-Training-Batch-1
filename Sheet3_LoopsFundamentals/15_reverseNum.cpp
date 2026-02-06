#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int temp = 0;
    int reverse = 0;

    cout<<"Enter a number to reverse :";
    cin>>inputNumber;

    while(inputNumber > 0){

        temp = inputNumber % 10;
        inputNumber = inputNumber / 10;
        reverse = reverse*10 +temp;
        cout<<"REVERSE NUMBER :"<<reverse<<endl;
      }
      cout<<"REVERSE NUMBER :"<<reverse<<endl;

      return 0;
    
}