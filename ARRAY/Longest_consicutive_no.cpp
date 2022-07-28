//TIME COMPLEXITY -----> O(Nlog(n))
// space complexity-------->

#include<bits/stdc++.h>
using namespace std;
int LongestConsicutiveNo(int arr[],int n)
{
    int count = 0;
    int max_length=0;
  sort(arr,arr+n);
  for(int i=0;i<n;i++)
  {
      // for(int j=0;j<=i;j++)
    
      // {
          
      // }
      if(arr[i+1]-arr[i]==1)
      {
          count++;
      }
      else
      {
        count = 1;
      }
      max_length = max(max_length,count);
  }
  return max_length+1;

}

int main()
{
int n;  
cin>>n;  
int arr[n];
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}
//sort(arr, arr+n);
cout<<LongestConsicutiveNo(arr,n)<<endl;
// for(int i=0; i < n; i++)
// {
//     cout<<arr[i]<<" ";
// }
cout<<endl;

  return 0;
}