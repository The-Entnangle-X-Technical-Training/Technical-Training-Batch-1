#include <iostream>
using namespace std;

int main() {
    int principal = 0;
    double rate = 0.0;
    int time = 0;
    double simpleInterest = 0.0;

    cout << "enter principal amount :";
    cin >>  principal;
 
    cout << "enter rate of interest :";
    cin >> rate;

    cout << "enter time in years :";
    cin >>  time;

    simpleInterest = (principal * rate * time) / 100;

    cout << "simple interest" << simpleInterest << endl;

    return 0;

}