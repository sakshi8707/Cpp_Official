#include<bits/stdc++.h>
using namespace std;

class solution
{
public:
  int maxProduct(int n,int arr[])
  {
    int result;   
    for(int i=0;i<n;i++)
    {                                     int pro = arr[i];
      for(int j=i+1;j<n;j++)
      {
        result = max(result,pro);
        pro *= arr[j];
      }
      result = max(result, pro);

    } 
    return result;
  }
};

int main()
{
  int n;cin>>n;  
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  solution obj;
  int ans = obj.maxProduct(n,arr);
  cout<<ans<<endl;


  return 0;
}