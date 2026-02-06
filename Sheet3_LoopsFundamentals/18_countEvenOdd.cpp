#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int temp = 0;
    int evenCounter = 0;
    int oddCounter = 0;

    cout<<"Enter a number :";
    cin>>inputNumber;

    while(inputNumber > 0){

        temp = inputNumber % 10;
        inputNumber = inputNumber / 10;
        
        if(temp % 2 == 0){
            evenCounter++;
        }
        else{
            oddCounter++;
        }
      }

      cout<<"Count of even Digits : "<<evenCounter<<endl;
      cout<<"count of odd Digits : "<<oddCounter<<endl;

      return 0;
    
}