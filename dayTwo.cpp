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


// #include<iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout<<"Enter a number : ";
//     cin>>number;

//     for(int i = 1; i<=20; i++)
//     {
//      if(i%2==0)
//      {
//         cout<<i<<" ";
//      }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;

    while(number <= 10)
    {
        if(number%2 == 1)
            cout<<number<<" ";
            number++;
        
    }
}