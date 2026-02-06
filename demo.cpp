// #include<iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout<<"Enter a number : ";
//     cin>>number;

//     for(int i = 0; i<=20; i++)
//     {
//      cout<<number + i<<" ";
//     }
    // return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout<<"Enter a number : ";
//     cin>>number;

//     while(number >= 1)
//     {
//         cout<<number--<<" ";
//     }
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout<<"Enter a number : ";
//     cin>>number;

//     while(number <= 10)
//     {
//         cout<<number++ *5<<" ";
//     }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout<<"Enter a number : ";
//     cin>>number;

//     for(int i = 0; i<=10; i++)
//     {
//      cout<<"5 *"<<i<<" = "<<number * i<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main()
{
    int number,i;
    cout<<"Enter a number : ";
    cin>>number;

    for(int i = 1; i<=20; i++)
    {
     if(i%number==0)
     {
        cout<<i<<" ";
     }
    }
// int i = 1;
int count = 0;
    while(i <= 20){
        if(i%number == 0){
            cout << i << " ";
            count++;
        }
        i++;
    }
    cout << endl;
    cout << "Count is: "<<count;
    return 0;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout<<"Enter a number : ";
//     cin>>number;

//     while(number <= 10) 
//     {
//         if(number%2 == 1)
//             cout<<number<<" ";
//             number++;
        
//     }
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cout << "Enter a number N: ";
//     cin >> N;

//     int sum = 0;   // variable to store sum
//     int i = 1;     // counter for first N even numbers
//     int even = 2;  // first even number

//     while (i <= N) {
//         sum += even;   // add current even number
//         even += 2;     // move to next even number
//         i++;           // increment counter
//     }

//     cout << "Sum of first " << N << " even numbers is: " << sum << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    // int base, exponent, result = 1;
    // cout<<"Enter base : ";
    // cin>>base;
    // cout<<"Enter exponent : ";
    // cin>>exponent;
    // for(int i = 1; i <= exponent; i++)
    // {
    //     result = result * base;
    // }
    // cout<<result;

    // int N;
    // cout << "Enter a number N: ";
    // cin >> N;

    // // for(N; N >=1; N--)
    // // {
    // //     cout<<N<<" ";
    // // }

    // for(int i=1;i<=N;i++) cout<<2*i<<" ";


    // int N,M,count;
    // cout<<"Enter the last point 'N' : ";
    // cin>>N;
    // cout<<"Enter the number 'M' to find multiples of : ";
    // cin>>M;

    // count = N/M;
    // cout<<"Total multiples of "<<M<<" from 1 to "<<N<<" are : "<<count<<endl;

    // for(int i=1; i<=N; i++)
    // {
    //     if(i%M==0)
    //     {
    //         cout<<i<<" ";
    //     }
    // }



    // int base, exponent, result = 1;
    // cout<<"Enter base : ";
    // cin>>base;
    // cout<<"Enter exponent : ";
    // cin>>exponent;

    // for(int i = 1; i <= exponent; i++)
    // {
    //     result = result * base;
    // }
    // cout<<result;


    // int N, sum = 0;
    // cout<<"Enter the value of N : ";
    // cin>>N;
    // for(int i = 1; i<=N; i++)
    // {
    //     sum = sum + i*i;
    // }
    // cout<<sum;

    int N, count = 0;
    cout<<"Enter the value of N : ";
    cin>>N;

    while(N>0)
    {
        N = N/10;
        count++;
    }
    cout<<count;


    return 0;
}