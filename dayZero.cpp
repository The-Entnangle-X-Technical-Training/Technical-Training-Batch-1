// #include <iostream>
// using namespace std;

// int main()
// {
//     float numOne, numTwo, numThree, sum, average;

//     cout << "Enter first number: ";
//     cin >> numOne;

//     cout << "Enter second number: ";
//     cin >> numTwo;

//     cout << "Enter third number: ";
//     cin >> numThree;

//     sum = numOne + numTwo + numThree;
//     average = sum / 3;

//     cout << "Sum = " << sum << endl;
//     cout << "Average = " << average;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     float c, f;

//     cout << "Enter temperature in Celsius: ";
//     cin >> c;

//     f = (c * 9 / 5) + 32;

//     cout <<c<<" degree celsius = " << f<<" fahrenheit";

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main()
// {
//     int numberOne, numberTwo;

//     cout << "Enter first number: ";
//     cin >> numberOne;

//     cout << "Enter second number: ";
//     cin >> numberTwo;

//     cout << "Before swapping: first number = " << numberOne << " second number = " << numberTwo<<endl;

//     numberOne = numberOne + numberTwo;
//     numberTwo = numberOne - numberTwo;
//     numberOne = numberOne - numberTwo;

//     cout << "After swapping: first number = " << numberOne << " second number = " << numberTwo;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int inputDays, years, weeks, days;

//     cout << "Enter total days: ";
//     cin >> inputDays;

//     years = inputDays / 365;
//     inputDays = inputDays % 365;
//     weeks = inputDays / 7;
//     days = inputDays % 7;

//     cout << "Years = " << years << endl;
//     cout << "Weeks = " << weeks << endl;
//     cout << "Days = " << days;

//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if(number > 0){
        cout << "Positive";
    } 
    else if(number < 0) {
        cout << "Negative";
    }
    else {
        cout << "Zero";
    }

    return 0;
}

