#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;cin>>n;       
    //   int arr[n];
    vector<int> arr(n);
      int maxi = 0,count = 0;
      for(int i = 0; i < n; i++)
      {
          int x;cin>>x;
          arr.push_back(x);
          maxi = max(maxi, x);
          
      }
//edge cases----------
      if(n==2)
      {
        // cout<<arr[0]+arr[1]<<endl;
        cout<<count+1<<endl;
        //  break;   
      }
//edge cases-----------
    //   for(int i = 0; i < n; i++)
    //   {
    //       if(arr[i]!=arr[i+1])
    //       {
    //         break;
    //       }
    //   }
    //   cout<<count<<endl;
//edge cases-----------
       for(int i = 0;i<n;i++)
       {
           if(arr[i]+arr[i+1]==maxi)
           {
                   count++;
               int temp = arr[i];
               arr[i] = maxi;
               temp = 0;
               for(int j = 0;j<n-1;j++)
               {
                   int temp2 = arr[j];
                   arr[j] = maxi;
                   arr[j+1] = arr[j+2];
                //    temp2 = 0;
               }
               cout<<arr.size()<<endl;
               n--;
           }
       }
       cout<<" count"<<count<<endl;
 //printing output-----------
//        cout<<"array is --->"<<endl;
//   for(int i=1;i<n;i++)
//   {
//     cout<<arr[i]<<" ";
//   }
//   cout<<endl;
//   cout<<"Next->"<<endl;
  }
  return 0;
}