//Geometric Progression - Print Series


#include <iostream>
using namespace std;

int main() {
    int firstTerm, commonRatio, numTerms;

    cout << "Enter first term: ";
    cin >> firstTerm;
    cout << "Enter common ratio: ";
    cin >> commonRatio;
    cout << "Enter number of terms: ";
    cin >> numTerms;

    int gpTerm = firstTerm;
    cout << "Geometric Progression: ";
    for (int i = 1; i <= numTerms; i++) {
        cout << gpTerm << " ";
        gpTerm = gpTerm * commonRatio;
    }
    cout << endl;

    return 0;
}