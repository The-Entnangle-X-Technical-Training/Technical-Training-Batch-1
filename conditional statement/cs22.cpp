// Month Days Calculator

# include <iostream>
using namespace std;
int main(){

    int month = 0;
    char ch = 0 ;

    cout<<"enter a month:";
    cin>>month;
    
    if (month==1 || month==3 || month==5 || month==7|| month==8 || month==10 || month==12){
        cout<<"31 days:";
        
    }

    else if  (month== 4 || month == 6 || month==9 || month==11){
        cout<<"30  days:";
    }

    else{
        cout<<"28 or 29 days:";
    }


    return 0 ;
}