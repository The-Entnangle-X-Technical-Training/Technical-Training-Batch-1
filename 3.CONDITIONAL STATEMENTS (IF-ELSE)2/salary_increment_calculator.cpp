#include <iostream>
using namespace std;

int main() {
    double salary;
    int rating, yearsOfService;
    double incrementPercent = 0.0;

    
    cout << "Enter current salary: ₹";
    cin >> salary;

    cout << "Enter performance rating (1-5): ";
    cin >> rating;

    cout << "Enter years of service: ";
    cin >> yearsOfService;

    
    
    if (rating == 5) {
        incrementPercent = 20.0;
    } else if (rating == 4) {
        incrementPercent = 15.0;
    } else if (rating == 3) {
        incrementPercent = 10.0;
    } else if (rating == 2) {
        incrementPercent = 5.0;
    } else if (rating == 1) {
        incrementPercent = 0.0;
    } else {
        cout << "Invalid rating!" << endl;
        return 0;
    }

    if (yearsOfService > 5) {
        incrementPercent += 5.0;
    }

    
    double newSalary = salary + (salary * incrementPercent / 100.0);

    cout << "New Salary: ₹" << newSalary << endl;

    return 0;
}
