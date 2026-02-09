#include <iostream>
using namespace std;

int sumofnumber(int firstNumber, int secondNumber, int ThirdNumber) {
    return firstNumber + secondNumber + ThirdNumber;
}
int main(){
    
    int firstNumber=0;
    int secondNumber =0;
    int ThirdNumber =0;
    int sum =0;
    cout << "Enter first number: ";
    cin >> firstNumber ;
    cout << "Enter second number: ";
    cin >> secondNumber;
    cout << "Enter third number: ";
    cin >> ThirdNumber;
    sum =sumofnumber(firstNumber, secondNumber, ThirdNumber);

    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << sum / 3 << endl;

    return 0;

}