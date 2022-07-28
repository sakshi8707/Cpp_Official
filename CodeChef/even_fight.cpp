#include <bits/stdc++.h>
using namespace std;

int main()
{
 int t;cin>>t;
 while(t--)
 {
   int n;cin>>n;
   int arr[n];
   vector<int> even;
   for(int i=0;i<n;i++)
   {
     cin>>arr[i];
     if(arr[i]%2==0)
     {
         even.push_back(arr[i]);
     }
   }
  if(even.empty())
  {
      cout<<0<<endl;
  }
   //main method  
   int count = 0;  
   for(int i=0;i<even.size();i++)
   {
      int a = even[i]; 
      while(a%2==0)
      {
         a = a/2; 
         count++;
      }
   }
//   for(int i=0;i<even.size();i++)
//   {
//       cout<<even[i]<<" ";
//   }
//   cout<<endl;
cout<<count<<endl;
 }
  
  return 0;
}