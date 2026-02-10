// Problem 12: Sum of Series: 1 - 2 + 3 - 4 + 5 - 6 + ... ± N
// Write a program that calculates this alternating series.

#include<iostream>
using namespace std;

int genrateTerm(int);

int main(){

    int noOfTerms = 0;
    int term = 0;
    int sumOfSeries = 0;

    cout<<"Enter number of terms : ";
    cin>>noOfTerms;

    for(int i = 1; i <= noOfTerms; i++){
        term = genrateTerm(i);

        sumOfSeries = sumOfSeries + term;
    }
    cout<<"Sum of series : "<<sumOfSeries;

    return 0;
}

int genrateTerm(int num){
    if(num % 2 == 0){
        num = num * -1;
    }
    return num;
}

