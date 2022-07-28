#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
int ans = 1;
int ans2;
while (t--)
{
    int n,d;
    cin>>n>>d;
    // main operation
    for(int i=1;i<=d;i++)
{
    
        
      if(i<=10)
        {
            ans = ans * 2;
            if(ans>n)
            {
              ans = n;
              break;
            }
        }
      else
        {
            ans = ans * 3;
                        if(ans>n)
            {
              ans = n;
              break;
            }

        }

        
    
}
}

  return 0;
}