#include<bits/stdc++.h>
using namespace std;
// void Iterative_Method(vector<int> &v,int k)
// {
//    vector<int> ans;
//    int max_no;
// int  s = v.size();          
//    for(int i=0;i<s-k;i++)
//    {
//        int it=v[i];
//        for(int j=1;j<=k;j++)
//        {
//          if(v[i+j]>it)
//          {
//              it = v[i+j];
//          }
//        }
//        cout<<it<<" ";
//    }
// //     ans.push_back(it);
// //    }
// //    for(auto a : ans)
// //    {
// //        cout<<a<<" ";
// //    }
// }
void printKMax(int arr[], int n, int k) 
{ 
    int j, max; 

    for (int i = 0; i <= n - k; i++) 
    { 
        max = arr[i]; 

        for (j = 1; j < k; j++) 
        { 
            if (arr[i + j] > max) 
                max = arr[i + j]; 
        } 
        cout << max << " "; 
    } 
}
int main()
{
int k;
cin>>k;
int n;
cin>>n;
//vector<int> v(n);
int v[n];
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
//Iterative_Method(v,k);
printKMax(v,n,k);
  return 0;
}