#include<bits/stdc++.h>
using namespace std;

//void practise(vector<int> &v,int k)
// {
//   multiset<int,greater<int> > m;  
//   vector<int> ans;
//   int n= v.size();
//   for(int i =0;i<k;i++)
//   {
//     m.insert(v[i]);
//   }
//   ans.push_back(*m.begin());
//   for(int i=k;i<n;i++)
//   {
//   m.erase(m.lower_bound(v[i]));
//   m.insert(v[i]);
//   ans.push_back(*m.begin());

//   }
//   for(auto a : ans)
//   {
//     cout<<a<<" ";
//   }

//}






  //FOR LOOP METHOD---------------------------------->
// void practise(int arr[],int n,int k)
// {

  // int max =0;
  // for(int i=0;i<=n-k;i++)
  // {
  //   max = arr[i];
  //   for(int j = 1 ;j<k;j++)
  //   {
  //     if(arr[i+j]>max)
  //     {
  //       max = arr[i+j];
  //     }

  //   }
  //   cout<<max<<" ";
  // }
//}
int main()
{
int n,k;
cin>>k>>n;
vector<int> v;
for(int i=0; i<n; i++)
{
  cin>>v[i];
}
//practise(v,k);

  multiset<int,greater<int> > m;  
  vector<int> ans;
 
  for(int i =0;i<k;i++)
  {
    m.insert(v[i]);
  }
  ans.push_back(*m.begin());
  for(int i=k;i<=n;i++)
  {
  m.erase(m.lower_bound(v[i]));
  m.insert(v[i]);
  ans.push_back(*m.begin());
  }
  for(auto a : ans)
  {
    cout<<a<<" ";
  }
  return 0;
}