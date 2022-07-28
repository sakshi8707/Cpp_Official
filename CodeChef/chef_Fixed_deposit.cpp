#include<bits/stdc++.h>
using namespace std;

int main()
 {
   int t;
   cin>>t;
   while(t--)
   {
   int n,X;
   cin>>n>>X;
   int arr[n];
   stack<int> s;
   int count=0,sum = 0;
   for(int i = 0; i<n;i++)
  {
    cin>>arr[i];
  }
  //--------after input-----------
  sort(arr,arr+n);
  for(int i=0; i<n;i++)
  {
     s.push(arr[i]);   
  }

  //------------printing output--------------
  for(int i=0; i<n;i++)
  {
   int val = s.top();
   sum = sum+val;
   count++;
   if(sum >= X)
   {
     cout<<count<<endl;
     break;
   }
    s.pop();
  }
  if(s.empty() && sum < X )
  {
    cout<<"-1"<<endl;
  }
   }
  return 0;
}