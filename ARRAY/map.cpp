#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;cin>>n;
  map<int,int> m;          
  for(int i=0;i<n;i++)
  {
    int a,b;cin>>a>>b;
    m.insert(make_pair(a,b));
  }
  

  for(auto &it : m)
  {
    cout<<it.first<<" "<<it.second<<" "<<endl;
  }

     map<int,int> m;
     for(int i=0;i<n;i++)
     {
      m[nums[i]]++;
     }
      


  return 0;
}