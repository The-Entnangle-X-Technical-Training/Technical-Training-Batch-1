//Write a program that takes any number as input and checks whether its last digit is even or odd, then
//displays the result

#include <iostream>
using namespace std;
int main() {
    int num = 0;
    cout << "enter a 4 digit number";
    cin >> num;

    int lastDigit =  num % 10;

    if(lastDigit % 2 == 0){
        cout << "this is even";
    } else {
        cout << "this is odd";
    }

    return 0;

}