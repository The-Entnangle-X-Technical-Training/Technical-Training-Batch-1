// Problem 4: Print First 10 Even Numbers
// Write a program that prints the first 10 even numbers (2, 4, 6, 8...)


#include <iostream>
using namespace std;

int main(){
    for(int i =1 ;i<= 10;i++){
        if(i %2==0){
            cout << i << " ";
        }
    }
    return 0;
}