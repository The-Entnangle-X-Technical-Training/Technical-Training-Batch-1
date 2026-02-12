//Write a program that takes a 4-digit number ABCD and checks if it contains the digit 0 anywhere except
//the first position. Example: 4012 → Duck Number, 0123 → Not Duck, 1234 → Not Duck. Display
//"Duck Number" or "Not Duck Number".

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a 4-digit number: ";
    cin >> num;

    int d1 = num / 1000;          
    int d2 = (num / 100) % 10;    
    int d3 = (num / 10) % 10;    
    int d4 = num % 10;            

    if (d1 != 0 && (d2 == 0 || d3 == 0 || d4 == 0))
        cout << "Duck Number";
    else
        cout << "Not Duck Number";

    return 0;
}
