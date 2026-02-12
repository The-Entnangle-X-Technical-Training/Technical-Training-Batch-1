 //count prime number 1 to N   

    #include <iostream>
using namespace std;

int main() 
{
    int N, count = 0;
    cin >> N;
    for (int i = 2; i <= N; i++)
     {
        bool prime = true;
        for (int j = 2; j < i; j++) 
        {
            if (i % j == 0)
             {
                prime = false;
                break;
            }
        }
        if (prime) count++;
    }
    cout << count;
    return 0;
}