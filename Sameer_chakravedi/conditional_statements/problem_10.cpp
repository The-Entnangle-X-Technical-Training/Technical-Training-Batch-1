// Problem 10: Leap Year Checker
// Write a program that takes a year as input and checks if it is a leap year. A year is leap if divisible by 4
// AND (not divisible by 100 OR divisible by 400). Display "Leap Year" or "Not Leap Year".

#include <iostream>
using namespace std;

int main(){
    int year = 0;
    cout <<"enter a year : ";
    cin >> year;
    if(year %4 ==0){
        cout << "Leap Year";
    }else{
        cout << "Not Leap Year";
    }
    return 0;
}