#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maximum=19999;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=2;
    int pd=arr[1]-arr[0];
    int i=2;
    int curr=2;
    for(int i=0; i<n;i++)
    {
    if(pd == arr[i]-arr[i-1])
    {
        curr++;
    }
    else
    {
       pd =arr[i]-arr[i-1];
       curr=2;
    }
    ans=max(ans,curr);
    }
    cout<<ans<<" ";
  return 0;  
}