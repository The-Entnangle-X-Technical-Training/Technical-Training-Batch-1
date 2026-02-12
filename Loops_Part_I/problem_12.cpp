// Problem 12: Sum of Series: 1² + 2² + 3² + ... + N²
// Write a program that takes N and calculates the sum: 1² + 2² + 3² + ... + N².

#include <iostream>
using namespace std;

int main(){
    int Number = 0;
    int ans = 0;
    cout <<" Enter a Number : ";
    cin >> Number;
    
    for(int i = 1 ; i <=Number ; i++){
        ans  = ans + (i * i) ;
    }
    cout << "the Sum of Series is : "<<ans;
    return 0;   
}