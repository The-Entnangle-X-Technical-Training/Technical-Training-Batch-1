// Problem 14: Count Even Numbers from 1 to N
// Write a program that counts how many even numbers exist from 1 to N.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int evenCount = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
        if(i%2==0){
            evenCount +=1;
        }
    }
    cout << "the count of even number to the n is : "<<evenCount;
    return 0;
}