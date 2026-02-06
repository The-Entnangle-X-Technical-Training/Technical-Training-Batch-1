//Count all Prime Number till N
#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;
    int isPrimeNumber = 0;
    int temp = 0;
    int counter = 1;

    cout<<"Enter a number : ";
    cin>>inputNumber;
  if(inputNumber > 1){
    for(int j = 2; j <= inputNumber; j++){  
        temp = j;
        for(int i = 2; i< temp; i++){
            if(temp % i != 0){
                isPrimeNumber = 1;
            }

            else{
                isPrimeNumber = 0;
                break;
            }
        }
    
        if(isPrimeNumber == 1|| inputNumber == 2){
            counter++;
        }
      }  
    }
  else{
     cout<<"Enter number greater than 1";
    }
  cout<<"Count : "<<counter;
    return 0;
}
