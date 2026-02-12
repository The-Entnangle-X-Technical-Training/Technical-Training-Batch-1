#include <iostream>
using namespace std;

int main() {
    int number, count = 0, evencount =0,oddcount =0,digit;

    cout << "Enter Number: ";
    cin >> number;

    while(number !=0) {
        digit = number % 10;
        if (digit % 2 ==0) 
        evencount++;
        else 
        oddcount++;
        number = number /10;
        
    }
    cout<< "even count = "<<evencount<<endl;
    cout << "odd count = "<<oddcount<<endl;

    return 0;
} 
