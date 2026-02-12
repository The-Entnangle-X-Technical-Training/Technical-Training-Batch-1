#include <iostream>
using namespace std;

int main() {
    int age, creditScore;
    double income;
    bool eligible = true;

    
    cout << "Enter age: ";
    cin >> age;

    cout << "Enter monthly income: ₹";
    cin >> income;

    cout << "Enter credit score: ";
    cin >> creditScore;


    if (age < 21 || age > 60) {
        cout << "Ineligible due to age." << endl;
        eligible = false;
    }

    
    if (income <= 25000) {
        cout << "Ineligible due to income." << endl;
        eligible = false;
    }

   
    if (creditScore <= 700) {
        cout << "Ineligible due to credit score." << endl;
        eligible = false;
    }

    
    if (eligible) {
        cout << "Eligible for loan." << endl;
    }

    return 0;
}
