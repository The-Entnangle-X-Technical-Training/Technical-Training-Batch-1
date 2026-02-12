// sum of digits


// #include <iostream>
// using namespace std;
// int main(){

//     int i = 1 ;
//     int sum = 0 ;
//     int N = 0 ;
//     int N1 = 0;
//     int N2 =0 ;
//     int N3 = 0;


//     cout<<"enter N:";
//     cin>>N;

//     while( i <= N){
//         N1=N/100;
//         N2=N/10%10;
//         N3=N%10;
//         sum=N1+N2+N3;
//         i++;
//     }
//     cout<<sum ;

//         return 0;
// }    


#include <iostream>
using namespace std;
int main(){

    int i = 1 ;
    int sum = 0 ;
    int N = 0 ;
    int N1 = 0;
    int N2 =0 ;
    


    cout<<"enter N:";
    cin>>N;

    while( i <= N){
        N1=N/10;
        N2=N%10;
        
        sum=N1+N2;
        i++;
    }
    cout<<sum ;

        return 0;
}    