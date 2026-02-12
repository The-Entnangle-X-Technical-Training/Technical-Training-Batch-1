//prting pattern for n  rows
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows /n:"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j =1 ;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
/*#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    
    for(int i = 1; i <= n; i++) {      // Outer: rows
        for(int j = 1; j <= n; j++) {  // Inner: columns (always 1 to n)
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
*/