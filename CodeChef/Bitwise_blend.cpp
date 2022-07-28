#include<bits/stdc++.h>
using namespace std;
// Input :
// 2
// 2
// 0 0
// 3
// 6 16 69
// output : 
  int parityAnd(int a,int b)
  {
    return (a&b)%2;
  }
    int parityOr(int a,int b)
  {
    return (a|b)%2;
  }
  int checkTasty(vector<int> &v,int n)
  {
       // for checking------------>
       //parity(Ai&Ai+1)≠parity(Ai|Ai+1) for 1≤i<N
       for(int i=0;i<n;i++)
       {
         if(parityAnd(v[i],v[i+1])==parityOr(v[i],v[i+1]))
         {
           return i;
           break;
         }
       }
       return -1;
  }
  
int main()
{
int t;cin>>t;
  while(t--)
  {
      int n;cin>>n;
      vector<int> v(n);
      for(int i=0;i<n;i++)
      {
          int x;cin>>x;
          v.push_back(x);
      }
      int i = checkTasty(v,n);
      if(i!=-1)
      {
        int j = 1+1;
        v[i] = v[i]^v[j];
        if(checkTasty(v,n))
      // cout<<"YEs"<<endl;
      }
      else
      {

      // cout<<"NO"<<endl;
      }
  }

  return 0;
}