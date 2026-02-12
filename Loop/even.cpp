//count odd number

#include <iostream>
using namespace std;

int main()
 {

    int number;

    cout << "Enter a number: ";
    cin >> number;

    while(number<=20)
    {
        if(number%2==1)
        cout<<number<<" ";
        number++;
    }

return 0;

}