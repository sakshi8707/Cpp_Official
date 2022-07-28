#include<bits/stdc++.h>
using namespace std;

    void show(int a[] ,int arry_size)
    {
        for(int i =0;i<arry_size;i++)
        {
            cout<<a[i]<<" ";
        }
    
    
    }
int main()
{
    int arry_size   ;
    int arr[arry_size];
    for(int i=0;i<arry_size;i++)
    {
        cin>>arr[i];
    }    
    int asize = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size+arr);
    show(arr,asize);
    
    




    return 0;
}