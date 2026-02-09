// Problem 8: Pass or Fail
// Write a program that takes a student's marks (out of 100) as input and displays "Pass" if marks ≥ 40,
// otherwise displays "Fail".

#include <iostream>
using namespace std;

int main(){
    int marks =0 ;
    cout << "Enter yoor marks out of 100 : ";
    cin >> marks;
    if(marks >= 40){
        cout << "pass";
    }else{
        cout << "fail";
    }
    return 0;
}