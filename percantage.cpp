#include <iostream>
using namespace std;
int main() {
    int numberOne = 0, numberTwo = 0, numberThree = 0, sumOfNumber = 0, percentageOfSubjects = 0;
    cout<< "Enter the marks of First Subject : ";
    cin>>numberOne;

    cout<< "Enter the marks of Second Subject : ";
    cin>>numberTwo;

    cout<< "Enter the marks of Thrid Subject : ";
    cin>>numberThree;

    sumOfNumber = numberOne + numberTwo + numberThree;
    cout<<"Sum of SUbjects is : "<<sumOfNumber<<endl;
    percentageOfSubjects = (sumOfNumber / 300.0) * 100;
    cout<<"Percentage of your Subjects is : "<<percentageOfSubjects<< " % "<<endl;
    return 0;
}