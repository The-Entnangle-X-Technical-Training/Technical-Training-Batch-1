// Program 9: Average of First and Last Digit
// Write a program that takes a 4-digit number and calculates the average of its first and last digits

#include <iostream>
using namespace std;

int main(){
   int number = 0;
   double Average = 0;
   cout <<" Enter the 4 - Digit number : ";
   cin >> number ;
   Average = ((number /1000) + (number %10))/2;
   cout << "Average of first and last Digit : "<< Average;

   return 0;

}