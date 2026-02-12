#include <iostream>
using namespace std;

int main() {
    int age;
    int ticketPrice = 0;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 0 && age <= 12) {
        ticketPrice = 100;  // Child
    } else if (age >= 13 && age <= 17) {
        ticketPrice = 150;  // Teen
    } else if (age >= 18 && age <= 59) {
        ticketPrice = 200;  // Adult
    } else if (age >= 60) {
        ticketPrice = 120;  // Senior
    } else {
        cout << "Invalid age!" << endl;
        return 0;
    }

    cout << "Ticket Price: ₹" << ticketPrice << endl;

    return 0;
}
