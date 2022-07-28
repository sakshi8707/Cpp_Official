#include<bits/stdc++.h>
using namespace std;
// IN THIS WE DO PROGRAM USING swaping 
vector<vector<int> > ans;
    void permute(vector<int> &a,int idx)
    {
        if(idx==a.size())
        {
             ans.push_back(a);
        }
        for(int i=idx;i<a.size();i++)
        {
            swap(a[i],a[idx]);
            permute(a,idx+1);
            swap(a[i],a[idx]);

        }
        return;
    }
int main()
{
 // using vector 
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
    {
 cin>>i;
    }
    // STL SORT TRCK-------------------------------------------
    // sort(a.begin(),a.end());
    // do
    // {
    //     ans.push_back(a);
    // } while (next_permutation(a.begin(),a.end()));
    permute(a,0);
    for(auto v : ans)
    {
    for(auto i:v)
    cout<<i<<" ";
    cout<<endl;
    }
    // for(int i=0;i<v.size();i++)
    // {
    //   int x ;
    //   cin>>x;
    //   v.push_back(x);  
    // }
    // // brute force approch
    // for(int i=0;i<v.size();i++)
    // {
    //     if(v[i]==v.size())
    //     {
    //         v.push_var(i);
    //     }
    // }
     return 0;
}