#include<iostream>
using namespace std;

int main(){
    int inputNumber = 0;
    int multiple = 0;
    int counter = 0;

    cout<<"Enter a number : ";
    cin>>inputNumber;

    cout<<"Enter the multiple checker number : ";
    cin>>multiple;

    for(int i = 1; i<= inputNumber; i++){
        if(i % multiple == 0){
            counter++;
        }
    }
    cout<<"Count of multiples : "<<counter<<endl;

    int j = 1;
    counter = 0;
    while(j<= inputNumber){
        if(j % multiple == 0){
            counter++;
        }
        j++;
    }
    cout<<"Count of multiples : "<<counter;

    return 0;

}