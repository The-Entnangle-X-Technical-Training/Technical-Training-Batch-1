// Problem 34: Salary Increment Calculator
// Write a program that calculates salary increment based on performance rating (1-5): Rating 5: 20%,
// Rating 4: 15%, Rating 3: 10%, Rating 2: 5%, Rating 1: 0%. If years of service > 5, add extra 5%. Display
// new salary

#include <iostream>
using namespace std;

int main() {
    double salary =0.0;
    int rating =0;
    int yearsOfService =0;

    cout << "Enter current salary: ";
    cin >> salary;

    cout << "Enter performance rating (1-5): ";
    cin >> rating;

    cout << "Enter years of service: ";
    cin >> yearsOfService;

    double increment = 0.0;

    if(rating == 5)
        increment = 0.20;
    else if(rating == 4)
        increment = 0.15;
    else if(rating == 3)
        increment = 0.10;
    else if(rating == 2)
        increment = 0.05;
    else if(rating == 1)
        increment = 0.0;

    if (yearsOfService > 5) {
        increment += 0.05; 
    }

    double newSalary = salary + (salary * increment);
    cout << "New salary after increment: " << newSalary << endl;

    return 0;

}
