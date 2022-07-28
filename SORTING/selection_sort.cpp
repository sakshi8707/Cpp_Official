#include<bits/stdc++.h>
using namespace std;
void Selection_sort(int n,int arr[])
{
   int temp ;
   for(int i=0;i<n-1;i++)
   {
     for(int j= i+1;j<n;j++)
     {
         if(arr[j]<arr[i])
         {
             temp = arr[i];
             arr[i] = arr[j];
             arr[j] =  temp;
         }
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
 Selection_sort(n,arr);
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}