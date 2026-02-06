//Print all Prime Number
#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;
    int isPrimeNumber = 0;
    int temp = 0;

    cout<<"Enter a number : ";
    cin>>inputNumber;
  if(inputNumber > 1){
    cout<<2<<endl;
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
            cout<<temp<<endl;
        }
      }  
    }
  else{
     cout<<"Enter number greater than 1";
    }
    return 0;
}
