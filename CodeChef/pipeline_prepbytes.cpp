
#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,m;cin>>n>>m;
 int arr[m];
 for(int i = 0; i <m; i++)
 {
     arr[i] = -1;
 }
     int count = 0;
 for(int i=0;i<n;i++)
 {
     int l,r;cin>>l>>r;
    for(int j=l; j<=r; j++)
    {
        if(arr[j] == -1)
        {
          arr[j] = 1;
          count++;
        }
    }
 }
 int count1 = 0;
 for(int i = 0; i<m; i++)
 {
     if(arr[i]==-1)
     {
         count1++;
     }
 }
//  int ans = m-count;
//  if(ans>0)
//  {
//    cout<<ans<<endl;
//  }n
//  else
//  {
//    cout<<(-ans)<<endl;
//  }
cout<<count1<<endl;

  return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//  int no_pipelines,no_houses;
//  cin>>no_pipelines>>no_houses;
//  vector<int> houses(-1,no_houses);
//  for(int i=0;i<no_pipelines;i++)
//  {
//    int l1,r1;
//    cin>>l1>>r1;
//    for(int j=l1;j<=r1;j++)
//    {
//      if(houses[j]==-1)
//     {
//      houses[j] = 1;
//     }
//    }
//  }
//  //checking not reacheble houses
  
//   int count=0;
//   for(int i=0;i<houses.size();i++)
//   {
//     if(houses[i]==-1)
//     {
//       count++;
//     }
//   }
//   cout<<count-1<<endl;
 
  
//   return 0;
// }