#include<bits/stdc++.h>
using namespace std;
//Time complexity-------> O(n*logk);
int main()
{
    int n,k;
    cin>>k;
    cin>>n;
 vector<int> v(n);
 for(int &input : v)
 {
     cin>>input;
 }
 // creating multiset and ans vector
 multiset<int,greater<int> > m;
 vector<int> ans ;
 // taking first 3 no input
for(int i=0;i<k;i++)
{
    m.insert(v[i]);
}
// 
ans.push_back(*m.begin());
// taking input after 3 element
for(int i=k;i<n; i++)
{
    m.erase(m.lower_bound(v[i]));
    m.insert(v[i]);
    ans.push_back(*m.begin());
}
// return output which is in ans vector
for(int a:ans)
{
    cout<<a<<" ";
}
cout<<endl;



  return 0;
}