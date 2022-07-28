#include<bits/stdc++.h>
using namespace std;

int Partition(int arr[],int l,int r)
{
  int pi = arr[r];
  int i = l-1;
  for(int j=l;j<r;j++)
  {
      if(arr[j]<pi)
      {
          i++;
          swap(i,j);
      }
  }
  swap(arr[i+1],arr[r]);
  return i+1;
}

void QuickSort(int arr[],int l,int r)
{
if(l<r)
{
    int pi = Partition(arr,l,r);
    QuickSort(arr,l,pi-1);
    QuickSort(arr,pi+1,r);
}
}

int main()
{
int n;
cin>>n;
int arr[n];
for(int i = 0; i < n;i++)
{
    cin>>arr[i];
}
QuickSort(arr,0,n);
// printing output
for(int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
  return 0;
}