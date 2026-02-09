#include<iostream>
using namespace std;

int main() {
    int marks1, marks2, marks3, marks4, marks5;
    int sum;
    float average;

    cout << "Enter marks of 5 subjects: " << endl;
    cin >> marks1 >> marks2 >> marks3 >> marks4 >> marks5;

    sum = marks1 + marks2 + marks3 + marks4 + marks5;
    average = sum / 5.0; 
    cout<<"Sum of marks ="<<sum<<endl;
    cout<<"Average of marks = "<<average<<endl;

    return 0;
}