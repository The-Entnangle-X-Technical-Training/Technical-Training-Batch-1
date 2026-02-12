#include <iostream>
using namespace std;
int main() {
    int number,count=0;
    cout<<"enter a number : ";
    cin>>number;
    if (number == 0){
        count=1;
    } else {
        while(number != 0) {
            number = number / 10;
            count++;
        }
    }
    cout<<"total digit count = "<<count;
    return 0; 
}