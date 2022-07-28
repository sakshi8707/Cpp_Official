#include<bits/stdc++.h>
using namespace std;
/*
input
9
-2 1 -3 4 -1 2 1 -5 4
*/
int kadane(int n,int arr[])
{
    int sum  = 0;
   int maxsum = INT_MIN;
   for(int i= 0; i<n-1; i++)
   {
       sum = 0;
       for(int j=i;j<n;j++)
       {
         sum =+ arr[j];
         if(sum>maxsum)
         {
            maxsum = sum;
         }
       }
   }
   return maxsum;
}

int kadaneBestApproch(int n,int arr[])
{
  int maxsum = 0;
  int currSum = 0;
  for(int i=0; i<n; i++)
  {
    currSum = currSum + arr[i];
    if(currSum > maxsum)
    {
      maxsum = currSum;
    }
    else if(currSum<0)
    {
      currSum = 0;
    }
  }
  return maxsum;
}

int main()
{
    int n;cin>>n;          
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int ans = kadane(n,arr);
    cout<<ans<<endl;
    int ans1 = kadaneBestApproch(n,arr);
    cout<<ans1<<endl;
   
  return 0;
}   