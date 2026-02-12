#include<iostream>
using namespace std;

int main() {
    int marks;
    cout << "enter your marks: ";
    cin >> marks;

    if (marks >= 40 && marks <= 100) {
        cout << "you have passed the exam" << endl;
    }

    else if (marks >= 0 && marks < 40) {
        cout << "you have failed the exam" << endl;
    }

    else {
        cout << "invalid marks entered" << endl;
    }
    return 0;
}