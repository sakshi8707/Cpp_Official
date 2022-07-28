#include<bits/stdc++.h>
using namespace std;
// permute function
 /*vector<vector<int> > ans; 
void Permute(vector<int> a,int idx)
{
   if(idx==a.size())
   {
       ans.push_back(a);
       return ;
   }
   for(int i = idx; i < a.size(); i++)
   {
      swap(a[i],a[idx]);
      Permute(a,idx+1);
      swap(a[i],a[idx]);
   }
}
*/
int main()
{
 vector<vector<int> > ans;
int n; //
cin>>n;
vector<int> a(n);   
for(auto &i : a)
cin>>i;
//Permute(a,0); 
// BEST CODE FOR PERMUTATION_APNACOLLEGE
sort(a.begin(), a.end());
do
{
    ans.push_back(a); 
} while (next_permutation(a.begin(), a.end()));

// printing aoutput
  for(auto v : ans)
  {
  for(auto i : v)
  {
 cout<<i<<" ";
  } 
  cout<<endl;
  }

    return 0;                                                         
}                                                                     