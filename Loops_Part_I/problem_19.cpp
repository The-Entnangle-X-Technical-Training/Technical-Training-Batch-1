// Problem 19: Armstrong Number Check
// Write a program that checks if a number is an Armstrong number (sum of cubes of digits equals the
// number itself).
// Example: 153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153

#include <iostream>
using namespace std;

int main(){
    int Number = 0;
    int sumOfCubes = 0;
    int power = 0;
    int digit =0;
    int cube = 1;
    cout <<" Enter a Number : ";
    cin >> Number;
    for(int temp2 = Number; temp2 > 0; temp2 /= 10){
        power++;
    }


    int temp = Number;
    while(temp > 0){
        digit = temp % 10; 
        
        for(int i = 0; i < power; i++){
            cube *= digit;
        }
        sumOfCubes += cube;
        temp /= 10; 
    }
    if(sumOfCubes == Number){
        cout << Number << " is an Armstrong number.";
    } else {
        cout << Number << " is not an Armstrong number.";
    }
    return 0;
}