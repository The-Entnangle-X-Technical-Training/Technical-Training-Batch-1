//sum of series

    #include<iostream>
    using namespace std;
    int main()
    {
        int number, sum=0;
        cout<<"Enter a number:";
        cin>>number;

    for(int i=1;i<=number;i++)
    {
        sum=sum+(i*i);
    }
    cout<<"Sum of series is:"<<sum<<endl;
    return 0;
    }