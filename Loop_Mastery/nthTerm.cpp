// Print Nth term of fibonacci series

#include<iostream>
using namespace std;
int main(){
    int number, numOne=0, numTwo=1,nthterm;
    cout<<"Enter a number:";
    cin>>number;
    for(int i=1;i<=number;i++){
        int fibonacci=numOne;
        nthterm=fibonacci;
        int next=numOne+numTwo;
        numOne=numTwo;
        numTwo=next;

    }
    cout<<nthterm;
    return 0;
}