#include<bits/stdc++.h>
using namespace std;

bool ForAllEven(vector<int> &v)
{
    int n = v.size();
    for(int i = 0; i<n; i++)
    {
        if(v[i]%2==1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
  int t;cin>>t;
  while(t--)
  {
      int n;cin>>n;         
      vector<int> v(n);  
      for(int i= 0; i<n; i++)
      {
          int x;cin>>x;
          v.push_back(x);
      }

      if(ForAllEven(v))
      {
          cout<<"-1"<<endl;
      }
      else
      {
          int odd1=0,odd2=0,even1=0,even2=0;
          for(int i= 0; i<v.size(); i+=2)
          {
              if(v[i]%2==1)
              {
                  odd1++;
              }
              else
              {
                  even1++;
              }
          }
          for(int i=1;i<n;i+=2)
          {
              if(v[i]%2)
              {
                  odd2++;
              }
              else
              {
                  even2++;
              }
          }
          int ans=0,mini,j=0;
          mini = min(even1+odd2,even2+odd1);
          //-------------------------if condition-------------------------
          if(mini==even1+odd2)
          {
              for(int i=0;i<n;i+=2)
              {
                  if(v[i]%2)
                  {
                      j =i;
                      break;
                  }
              }
              cout<<mini<<endl;
              for(int i=0;i<n;i+=2)
              {
                  if(v[i]%2==0)
                  {
                      cout<<i+1<<" "<<j+1<<" "<<endl;
                  }
              }
              for(int i=1;i<n;i+=2)
              {
                  if(v[i]%2)
                  {
                      cout<<i+1<<" "<<j+1<<" "<<endl;
                  }
              }
          }
        //------------------------------------else condition--------------
        else
        {
           for(int i=1;i<n;i+=2)
              {
                  if(v[i]%2)
                  {
                      j =i;
                      break;
                  }
              }
              cout<<mini<<endl;
              for(int i=0;i<n;i+=2)
              {
                  if(v[i]%2==1)
                  {
                      cout<<i+1<<" "<<j+1<<" "<<endl;
                  }
              }
              for(int i=1;i<n;i+=2)
              {
                  if(v[i]%2==0)
                  {
                      cout<<i+1<<" "<<j+1<<" "<<endl;
                  }
              }
        }
      }
  }

  return 0;
}