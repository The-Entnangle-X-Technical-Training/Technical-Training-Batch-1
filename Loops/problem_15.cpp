// Problem 15: Count Odd Numbers from 1 to N
// Write a program that counts how many odd numbers exist from 1 to N

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int evenCount = 0;
    cout <<" Enter a number : ";
    cin >> number;
    for(int i = 1 ; i <=number ; i++){
        if(i%2==1){
            evenCount +=1;
        }
    }
    cout << "the count of odd number to the n is : "<<evenCount;
    return 0;
}
