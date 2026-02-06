//Armstrong Number  153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153
#include<iostream>
using namespace std;

int main(){

    int inputNumber = 0;
    int temp = 0;
    int sum = 0;
    int originalNumber = 0;
    int counter = 0;
    int power = 1;

    cout<<"Enter a number to check for Armstrong number : ";
    cin>>inputNumber;

    originalNumber = inputNumber;

    while(inputNumber > 0){
        inputNumber = inputNumber / 10;
        counter++;
    }
    inputNumber = originalNumber;
    
    
    while(inputNumber > 0){
        temp = inputNumber % 10;
        inputNumber = inputNumber / 10; 
        power = 1;  

        for(int i = 1; i <= counter ; i++){
                power = power *temp;
            cout<<"POWER : "<<temp<<endl;
        }
        sum = sum + power;
        cout<<"Sum: "<<sum<<endl; 
    }

    if(sum == originalNumber){
        cout<<"Armstrong Number!";
    }
    else{
        cout<<"Not a Armstrong number";
    }
    return 0;
}