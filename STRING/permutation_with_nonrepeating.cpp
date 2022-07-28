#include<bits/stdc++.h>
using namespace std;
void Helper(vector<int> a,vector<vector<int>> &ans ,int idx)
{
    if(idx==a.size())
 {
 ans.push_back(a);
 return;
 for(int i=0;i<a.size();i++)
  {
   if(i!=idx and a[i]==a[idx])
   continue;
    swap(a[i],a[idx]);
   Helper(a,ans,idx+1);
  
  }
 }
}
vector<vector<int> > Permute(vector<int> a)
{
 sort(a.begin(),a.end());
 vector<vector<int> > ans;
   Helper(a,ans,0);
 return ans;
  
 }



int main()
{
//vector<vector<int> > ans;
int n;
cin>>n;
vector<int> a(n);
for(auto &i : a)
cin>>i;
//Permute(a,ans,0);
vector<vector<int> > res = Permute(a);
for(auto i : res)
{
    for(auto v : i)
    {
        cout<<v<<" ";
    }
    cout<<endl;    
}
    return 0;
}