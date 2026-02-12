// rectangle pattern (M * N)

#include <iostream>
using namespace std;

int main() {

    int M=0;
    int N=0;

    cout<< "enter the number of rows:";
    cin>>M;

    cout<<"enter the number of columns:";
    cin>>N;


    for(int i = 1; i <= M; i++) {      // rows
        for(int j = 1; j <= N; j++) {  // columns
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}


