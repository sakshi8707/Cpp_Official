#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[100];
int i=0;
while(n>0)
{
    arr[i] = n%2;
      n = n/2;
      i++;          
}
for(int j = i-1;j>=0;j--)
{
    cout<<arr[j];
}

  return 0;
}