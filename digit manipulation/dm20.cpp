
// Duck no checker  
#include <iostream>
using namespace std;

int main(){

    int number = 0;
    int A = 0, B = 0, C = 0, D = 0;

    cout << "Enter 4 digit number: ";
    cin >> number;

    if(number >= 1000 && number <= 9999){

        A = number / 1000;
        B = (number / 100) % 10;
        C = (number / 10) % 10;
        D = number % 10;

        if(B == 0 || C == 0 || D == 0){
            cout << "Duck number";
        }
        else{
            cout << "Not a duck number";
        }
    }
    
        return 0;
}
