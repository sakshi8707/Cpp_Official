#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int N,M;
cin>>N>>M;
int a[N],b[M];
// taking input of jack
for(int i = 0; i < N; i++)
{
    cin>>a[i];
}
// taking input of jack
for(int i = 0; i < M; i++)
{
    cin>>b[i];
}
// main operation 
for(int i = 0; i < N;i++)
{
    for(int j = 0; j < M; j++)
    {
      if(a[i]<b[j]) 
      {
      swap(a[i],b[j]);
      }
      i
    }
}
  }

  return 0;
}

