#include<bits/stdc++.h>
using namespace std;
void permute(vector<vector<int> > &ans,vector<int> &a,int idx)
{
 if(idx==a.size())
  {
ans.push_back(a);
return;
  }
for(int i= idx;i<a.size();i++)
{
    if(i!= idx && a[i]==a[idx])
    {
    continue;
    }
   swap(a[i],a[idx]);
    permute(ans,a,0);
 }
}
vector<vector<int> > helper(vector<int> &a)// function for sorting the values
{

sort(a.begin(),a.end());
vector<vector<int> > ans = helper(a);
permute(ans,a,0);
return ans;  
}


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto i : a)
    cin>>i; 
    vector<vector<int> > ans ;
    for(auto v : ans)
    for(auto i : v)
    cout<<i<<" ";
    cout<<endl;
    return 0;   
}