//Write a program that calculates salary increment based on performance rating (1-5): Rating 5: 20%,
//Rating 4: 15%, Rating 3: 10%, Rating 2: 5%, Rating 1: 0%. If years of service > 5, add extra 5%. Display
//new salary.

#include <iostream>
using namespace std;

int main() {
    float salary, increment = 0, newSalary;
    int rating, years;

    cout << "Enter current salary: ";
    cin >> salary;

    cout << "Enter performance rating (1-5): ";
    cin >> rating;

    cout << "Enter years of service: ";
    cin >> years;

    switch(rating) {
        case 5: increment = 0.20; break;
        case 4: increment = 0.15; break;
        case 3: increment = 0.10; break;
        case 2: increment = 0.05; break;
        case 1: increment = 0.00; break;
        default: cout << "Invalid rating"; return 0;
    }

    if(years > 5) {
        increment += 0.05;
    }

    newSalary = salary + (salary * increment);

    cout << "New Salary after increment = ₹" << newSalary;

    return 0;
}
