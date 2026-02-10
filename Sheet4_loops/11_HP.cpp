// Problem 11: Sum of Series: 1 + 1/2 + 1/3 + ... + 1/N
// Write a program that calculates the sum of the harmonic series up to N terms.
// sum = 2/n(1/(2a + (n-1)d))

#include<iostream>
using namespace std;

float genrateHP(int);

int main(){

    int noOfTerms = 0;
    float termHP = 0;
    float sumOfHP = 0;

    cout<<"Enter number of terms : ";
    cin>>noOfTerms;

    for(int i = 1; i <= noOfTerms; i++){
        termHP = genrateHP(i);

        sumOfHP = sumOfHP + termHP;
    }
    cout<<"Sum of series : "<<sumOfHP;

    return 0;
}

float genrateHP(int num){
    float hpTerm = 1.0/num;

    return hpTerm;
}

