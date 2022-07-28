#include<bits/stdc++.h>
using namespace std;

void Insertion_sort(int n,int arr[])
{
    for(int i=1;i<n;i++)
    {
          int  j = i-1;    
        int a = arr[i];
        while(j>0 && arr[j]>a)
        {
            arr[j+1]== arr[j];
        // int j = i-1;
        j--;    
        }
        arr[j+1] = a;
    }
}

int main()
{
 int n; cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 Insertion_sort(n,arr);
 for(int i=0;i<n;i++)
 {
     cout<<arr[i]<<" ";
 }

  return 0;
}