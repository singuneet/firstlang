#include<iostream>
using namespace std;

int fact(int a)
{
    int factorial = 1;
    for (int i = 2; i <= a; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int main()
{
    int n;
    cin>>n;

    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}