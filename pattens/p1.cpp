// square pattern with stars

#include <iostream>
using namespace std;

int main() {
    
    for(int i = 1; i <= 4; i++) {      // rows
        for(int j = 1; j <= 4; j++) {  // columns
            cout << "* ";
        }
        cout << endl;
    }
    return 0;

    
}


