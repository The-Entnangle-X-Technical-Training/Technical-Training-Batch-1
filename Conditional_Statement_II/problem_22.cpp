// Problem 22: Month Days Calculator
// Write a program that takes month number (1-12) and year as input, and displays the number of days in
// that month (handle leap year for February).

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    int year = 0;
    cout<< "enter  a number of months : ";
    cin >>number;
    cout << "enter the year : ";
    cin >> year;
    if(number == 1 || number ==3 || number ==5 || number ==7||number ==8||number ==10||number ==12){
        cout <<"in that month are 31 days ";
    }else if(number ==2 && year%4==0){
        cout <<"in that month are 29 days ";
    }else if(number ==2){
        cout <<"in that month are 28 days ";
    }else if(number == 4 || number ==6||number ==9 ||number ==11){
        cout <<"in that month are 30 days ";
    }else {
        cout <<" invalid number ";
    }
    return 0;
}