#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {  
      int n;cin>>n;       
      int arr[n],maxi=0,count=0;
      for(int i = 0; i < n; i++)
      {
          cin>>arr[i];
          // maxi = max(maxi,arr[i]);
      }
      //edge cases
      for(int i = 0; i < n;i++)
      {
        maxi = max(maxi,arr[i]);
      }
      
      for(int i = 0; i <n;i++)
      {
        if(arr[i]==maxi)
        {
          continue;
        }
        if(arr[i]+arr[i+1]==maxi)
        {
          count++;
          for(int j=i;j<n-2;j++)
          {
          int temp = arr[j]; 
          arr[j] = maxi;
          temp = 0;
          int temp2 = arr[j+1];
          arr[j+1]=arr[j+2];
          temp2=0;
          }
        }
      }
      if(n==2)
      {
        cout<<count+1<<endl;
        // break;
      }
      else
      {
      cout<<" count "<<count<<endl;
      }
  }

  return 0;
}

// input: 
// 4
// 3
// 5 2 3
// 2
// 6 9
// 5
// 3 6 5 4 9
// 3
// 3 3 3
