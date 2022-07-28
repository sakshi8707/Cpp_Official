#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin>>t; 
  while(t--)
  {
    int n,a;cin>>n>>a;
    int remain = n-a;
    if(remain>a)
    {
        cout<<a<<endl;
    }
    else
    {
         cout<<remain<<endl;
    }
  }

  return 0;
}