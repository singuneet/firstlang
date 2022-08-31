#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int rev = 0;
   
    while (n > 0)
    {
        rev = 10*rev + n%10;
        n = n/10;
    }
    
    cout<<rev<<endl;

    return 0;
}