#include<iostream>
using namespace std;

int sum_n(int a)
{
    return (a*(a+1))/2;
}

int main()
{
    int n;
    cin>>n;

    cout<<sum_n(n);

    return 0;
}