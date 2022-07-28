#include<bits/stdc++.h>
using namespace std;
//  vector<int>
void findDisappearedNumbers(vector<int>& nums) 
   {
   int n = nums.size();
    unordered_map<char,int> mp = {{'M',10000},{'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
  //  for(int i = 1; i <= n; i++)
  //  {
    
  //  
   }

int main()
{
int n;cin>>n;
  vector<int> v(n);
  for(int i = 0; i < n;i++)
  {
      int x;cin>>x;
      v.push_back(x);
  }
//   findDisappearedNumbers(v);
       cout<<v[3];


  return 0;
}