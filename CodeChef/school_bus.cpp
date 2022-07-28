#include <bits/stdc++.h>
using namespace std;
/*
Sample Input
3
10 4
5 5
7 9

Sample Output
3
1
1
*/
int main()
{
  
  int t;cin>>t;
  while(t--)
  {
    int n,c;cin>>n>>c;
    //children= n,capacity of bus = c;
    int count=0;
    for(int i=c;i<n;i= i+=c)
    {
       if(n <=i)
       {
          break;
       }
       count++;
    }
    cout<<count+1<<endl;
  }
  
  return 0;
}