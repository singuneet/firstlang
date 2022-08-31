#include<iostream>
using namespace std;

int  main(){
    int arr[] = {12,45,75,1,5,6};
    int n = 6;

    for (int j = 0; j < n; j++)
    {
        /* code */
    
    
    for (int i = 0; i < n-j-1; i++) //compare i with i+1
    {
        if (arr[i]>arr[i+1])
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }

    }   
    
    

    return 0;
}