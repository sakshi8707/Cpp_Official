#include<bits/stdc++.h>
using namespace std;

int LongestNonDecreasingSeq(int n,vector<int> &v)
{
    int count=1;
    int max_len = 1;
    sort(v.begin(), v.end());
    // int i=1;
    int a;
    for(int i=1;i<=n;i++)
    {
        if(v[i]==v[i-1] || v[i]== v[i-1]+1)
        {
        count++;
        max_len = max(max_len,count);
        a = max_len;
        }
        else
        {
            count = 1;
        }
        
    }
    return a;

}

int main()
{
 int t;cin>>t;
 while(t--)
 {
     int n;cin>>n; 
     vector<int> v(n);
     for(int i= 0; i<n;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
   int ans = LongestNonDecreasingSeq(n,v);
   cout<<ans<<endl;
 }

  return 0;
}