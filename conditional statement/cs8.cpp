// PASS OR FAIL

// variable = student mark
// O1 = input student mark
// O2 = if mark >= 40 
// O3 = display pass
// O4 = else 
// O5 = display fail

# include <iostream>
using namespace std;
int main(){

    int mark = 0;
    int pass = 0 ;
    int fail =0 ;

    cout<<"enter a mark:";
    cin>>mark;

if (mark>=40){
    cout<<"pass";
}

else{
    cout<<"fail";
}

return 0 ;

}
