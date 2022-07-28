#include<bits/stdc++.h>
using namespace std;
//function for PrimeSieve
void PrimeSieve(long n)
{
  int arr[100] = {0};
  for(long i=2; i<=n; i++)
  {
     if(arr[i] == 0)
     {
       for(int j= i*i;j<=n;j+=i)
       {
         arr[j] = 1;
       }
     }
  }
  for(long i = 2;i<=n;i++)
  {
    if(arr[i] == 0)
    {
      cout<<i<<" ";
    }
    //cout<<endl;
  }

}
int main()
{
  long n;
  cin>>n;

 PrimeSieve(n);

  return 0;
}