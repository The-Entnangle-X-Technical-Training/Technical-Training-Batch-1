// Problem 5: Print First 10 Odd Numbers
// Write a program that prints the first 10 odd numbers (1, 3, 5, 7...)

#include <iostream>
using namespace std;

int main(){
    for(int i =1 ;i<= 10;i++){
        if(i %2==1){
            cout << i << " ";
        }
    }
    return 0;
}