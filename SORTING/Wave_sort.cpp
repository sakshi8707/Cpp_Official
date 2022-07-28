#include<bits/stdc++.h>
using namespace std;
void Wave_Sort(vector<int> &v,int n)
 {
for(int i=1;i<n;i+=2)
{
    if(v[i-1]<v[i])
    {
        swap(v[i-1],v[i]);
    }
     if(v[i]>v[i+1] && i<=n)
    {
        swap(v[i],v[i+1]);
    }
}
return;
 }

int main()
{
    int n;
    cin>>n;
vector<int> v;
for(int i = 0; i < n; i++)
{
    int x;      
    cin>>x;
    v.push_back(x);
    //cin>>i;
}
Wave_Sort(v,n);
for(int i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}

  return 0;
}