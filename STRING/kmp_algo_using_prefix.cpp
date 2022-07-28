#include<bits/stdc++.h>
using namespace std;

vector<int> PrefixFuction(string str) 
{
    int n=(int)str.length();
    vector<int> v(n,0);
    for(int i = 0; i <n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(str.substr(0,j)==str.substr( i-j+1, j))
              v[i] = j;
  
        }
    }
   return v;
}

int main()
{
// vector<int> ans;
    string str;
    cin>>str;
// vector<int> v;     
// int n = v.size();
// for(auto i : v)
// {
//     v.push_back(i);
// }
vector<int> ans = PrefixFuction(str);
for(auto anss : ans)
{
    cout<<anss<<" ";
}
  return 0;
}