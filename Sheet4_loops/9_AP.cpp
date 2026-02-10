// Problem 9: Arithmetic Progression - Print Series
// Write a program that takes first term (a), common difference (d), and N, then prints first N terms of AP.

#include<iostream>
using namespace std;

void genrateAP(int, int, int);

int main(){
    int firstTerm = 0;
    int commonDifference = 0;
    int noOfTerms = 0;

    cout<<"Enter the First Term of AP : ";
    cin>>firstTerm;
    cout<<"Enter the common differnce : ";
    cin>>commonDifference;
    cout<<"Enter number of terms : ";
    cin>>noOfTerms;

    genrateAP(firstTerm, commonDifference, noOfTerms);

    return 0;
}

void genrateAP(int firstnum, int cd, int num){
    if(num > 0){

        
        int newNum = firstnum - cd;

        for(int i = 1; i<= num; i++){
            newNum = newNum + cd;
            cout<<newNum<<" ";
        }
    }
    else{
        cout<<"Enter positive number of terms";
    }
}