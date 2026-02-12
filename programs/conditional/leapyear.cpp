// Write a program that takes a year as input and checks if it is a leap year. A year is leap if divisible by 4 
// AND (not divisible by 100 OR divisible by 400). Display "Leap Year" or "Not Leap Year".

# include <iostream>
using namespace std;

int main() {
    int year;

    cout<< "enter a year";
    cin>>year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 ==0)) {
        cout << "leap year ";
    }
    else {
        cout << "not a leap year";
    }

    return 0;
}