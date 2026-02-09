// Problem 37: Admission Eligibility (Multiple Criteria)
// Write a program that checks college admission eligibility based on: Maths marks ≥ 80, Physics marks ≥
// 75, Chemistry marks ≥ 75, Total of 3 subjects ≥ 240. Display "Eligible" if all conditions met, else "Not
// Eligible"

#include <iostream>
using namespace std;

int main(){
    int MathsMarks = 0;
    int PhysicsMarks = 0;
    int ChemistryMarks  = 0 ;
    int TotalMarks = 0;
    cout << " Enter the Maths subject Marks : ";
    cin >> MathsMarks;
    cout << " Enter the Physics subject Marks : ";
    cin >> PhysicsMarks;
    cout << " Enter the Chemistry subject Marks : ";
    cin >> ChemistryMarks;
    TotalMarks = MathsMarks + PhysicsMarks + ChemistryMarks;

    if(MathsMarks >=80 && PhysicsMarks >= 75 &&ChemistryMarks>=75 && TotalMarks >=240){
        cout<<" Eligible ";
    }else{
        cout << " Not Eligible ";
    }
    return 0;
}