// Problem 10: Arithmetic Progression - Sum of Series
// Write a program that calculates the sum of first N terms of an AP using a loop.

// Problem 9: Arithmetic Progression - Print Series
// Write a program that takes first term (a), common difference (d), and N, then prints first N terms of AP.

#include<iostream>
using namespace std;

int genrateAP(int, int, int);

int main(){
    int firstTerm = 0;
    int commonDifference = 0;
    int noOfTerms = 0;
    int sum = 0;

    cout<<"Enter the First Term of AP : ";
    cin>>firstTerm;
    cout<<"Enter the common differnce : ";
    cin>>commonDifference;
    cout<<"Enter number of terms : ";
    cin>>noOfTerms;

    for(int i = 1; i <= noOfTerms; i++){
        int apTerm = genrateAP(firstTerm, commonDifference, i);

        sum = sum + apTerm;
    }
    cout<<"Sum of AP : "<<sum;

    return 0;
}

int genrateAP(int firstnum, int cd, int num){
    if(num > 0){

        
        int newNum = firstnum - cd;

        for(int i = 1; i<= num; i++){
            newNum = newNum + cd;
        }
        return newNum;
    }
    else{
        return 0;
        }
}
