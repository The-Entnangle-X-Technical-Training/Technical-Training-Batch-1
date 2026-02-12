//Write a program that calculates ticket price based on age: Child (0-12): ₹100, Teen (13-17): ₹150, Adult
//(18-59): ₹200, Senior (60+): ₹120. Display the ticket price.

#include <iostream>
using namespace std;

int main() {
    int age;
    float price;

    cout << "Enter age: ";
    cin >> age;

    if(age >= 0 && age <= 12) {
        price = 100;
    }
    else if(age <= 17) {
        price = 150;
    }
    else if(age <= 59) {
        price = 200;
    }
    else if(age >= 60) {
        price = 120;
    }
    else {
        cout << "Invalid age";
        return 0;
    }

    cout << "Ticket price = ₹" << price;

    return 0;
}
