#include<iostream>
using namespace std;

int main(){
    int a = 3;
    int* b = &a;

    cout<<"Address of a "<<&a<<endl;
    cout<<"Value of a "<<a<<endl;

    cout<<"Address of a as stored in b "<<b<<endl;
    cout<<"Value stored in address of a "<<*b<<endl;

    return 0;
}