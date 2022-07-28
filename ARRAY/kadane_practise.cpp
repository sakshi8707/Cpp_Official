/*input            
6
1 -2 -3 4 -1 2 1              
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;cin>>n;
    int arr[n] ;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   //kadane's approch f
   int sum=arr[0],maxSum = INT_MIN;
   for(int i=0;i<n;i++)
   {
     sum = sum+arr[i];
     maxSum = max(maxSum,sum);
     if(sum<0)
     {
         sum = 0;
     }
   }
  cout<<maxSum<<endl;
  return 0;
}