// Problem 21: Day of Week Identifier
// Write a program that takes a number (1-7) and displays the corresponding day of the week (1=Monday,
// 2=Tuesday, ..., 7=Sunday). Display "Invalid" for other numbers.

#include <iostream>
using namespace std;

int main(){
    int number = 0;
    cout <<"enter a number for day of the week : ";
    cin >> number;

    if(number ==1){
        cout <<" it is monday";
    }else if(number ==2){
        cout <<" it is Tuesday";
    }else if(number ==3){
        cout <<" it is wednesday";
    }else if(number ==4){
        cout <<" it is thrusday";
    }else if(number ==5){
        cout <<" it is Friday";
    }else if(number ==6){
        cout <<" it is Saturday";
    }else if(number ==7){
        cout <<" it is sunday";
    }else{
        cout <<" Invalid number";
    }
    return 0;
}