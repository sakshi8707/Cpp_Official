// DNF = dutch natural flag sorting technique
#include<bits/stdc++.h>
using namespace std;

void Dutch_natural_flag_sort(int arr[],int n)
{
    int mid=0,low=0,high=n-1;
while(mid <= high)
{
    //  arr[mid] = 0;
    // arr[mid] = 0;
    if(arr[mid]==0)
    {
       swap(arr[mid],arr[low]);
       low++;
       mid++;
    }
    else if(arr[mid]==1)
    {
      mid++;
    }
    else if(arr[mid]==2)
    {
        swap(arr[mid],arr[high]);
        high--;
    }
}
}

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
Dutch_natural_flag_sort(arr,n);
for(int i=0;i<n;i++)
{
 cout<<arr[i]<<" ";
}
  return 0;
}