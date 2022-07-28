#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maximum=-19999;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n;i++)
    {
    int maximum=max(maximum,arr[i]);
     cout<<maximum<<" ";
    }
    
}