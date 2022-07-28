#include<bits/stdc++.h>
using namespace std;
// function for sliding window maximum  
void SlidingWindow(int arr[],int n,int k)
{
int max,j;
for(int i=0; i<=n-k;i++)
 {
 max = arr[i];
for(j=1;j<k;j++)
  {
    if(arr[i+j]>max)
    {
         max = arr[i+j];        
    }
  }
    cout<<max<<" ";
 }
cout<<endl;
}

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
int arr[n];
 //  n = sizeof(arr)/sizeof(arr[0]);
    //int max = arr[0];
    
for(int i = 0; i<n; i++)
{
    cin>>arr[i];
}
SlidingWindow(arr,n,k);
// for(int i=0;i<n-k;i++)
// {
// cout<<max<<" ";
// }

  return 0;
}