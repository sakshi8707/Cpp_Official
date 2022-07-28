#include<bits/stdc++.h>
using namespace std;

int main()
{
  map<string,int> m;
  int n;cin>>n;        
  for(int i=0;i<n;i++)
  { 
      string s;cin>>s;
      m[s]++;
    //   m.insert({sr,in});
  }
  for(auto it : m)
 {
    //   string itf = it.first;
    //   int its = it.second;
     cout<<it.first<<" "<<it.second<<" ";
 }

  return 0;
}