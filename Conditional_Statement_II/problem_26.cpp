// Problem 26: Valid Date Checker (Simple)
// Write a program that takes day (1-31) and month (1-12) and checks basic validity: day should be 1-31 for
// most months, 1-30 for Apr/Jun/Sep/Nov, 1-28/29 for Feb. Display "Valid" or "Invalid"

#include <iostream>
using namespace std;

int main(){
    int day = 0;
    int month = 0;
    cout << "enter a day : ";
    cin >> day;
    cout << "enter a month : ";
    cin >> month;
    if((month ==1 || month ==3 || month ==5 || month ==7||month ==8||month ==10||month ==12) && (day >=1 && day <=31)){
        cout <<"Valid date";
    }else if((month ==4 || month ==6||month ==9 ||month ==11) && (day >=1 && day <=30)){
        cout <<"Valid date";
    }else if(month ==2 && (day >=1 && day <=29)){
        cout <<"Valid date";
    }else{
        cout <<"Invalid date";
    }
    return 0;
}