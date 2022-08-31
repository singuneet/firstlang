#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 5;

    cout<<"Arithmetic Operators"<<endl;
    cout<<a + b<<endl;
    cout<<a - b<<endl;
    cout<<a * b<<endl;
    cout<<a / b<<endl;
    cout<<a % b<<endl;
    cout<<a++<<endl;
    cout<<a--<<endl;
    cout<<++a<<endl;
    cout<<--a<<endl;

    cout<<"Comparision Operators"<<endl;
    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;
    cout<<(a>=b)<<endl;
    cout<<(a<=b)<<endl;
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;

    cout<<"Logical Operators"<<endl;
    cout<<((a==b) && (a<b))<<endl;
    cout<<((a==b) || (a<b))<<endl;
    cout<<(!(a==b))<<endl;

    return 0;
}