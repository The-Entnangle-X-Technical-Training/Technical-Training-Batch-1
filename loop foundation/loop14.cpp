// count even numbers from 1 to N

#include <iostream>
using namespace std;

int main() {

    int i = 1;
    int N = 0;
    int count = 0;

    cout << "N: ";
    cin >> N;

    while(i <= N){
        if(i % 2 == 0){
            count++;
        }
        i++;   
    }

    cout << "Count of even numbers = " << count;

    return 0;
}
